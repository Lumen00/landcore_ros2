// pca9685_driver.cpp
#include "motorhat_driver.hpp"

#include <fcntl.h>
#include <unistd.h>
#include <sys/ioctl.h>
#include <linux/i2c-dev.h>
#include <cmath>
#include <cstring>
#include <thread>
#include <chrono>
#include "rclcpp/rclcpp.hpp"

namespace land_description
{

bool Pca9685Driver::open(const std::string & i2c_bus, uint8_t address, double freq_hz)
{
  address_ = address;

  // Open the I2C bus device (e.g. /dev/i2c-1)
  fd_ = ::open(i2c_bus.c_str(), O_RDWR);
  if (fd_ < 0)
  {
    RCLCPP_ERROR(
      rclcpp::get_logger("Pca9685Driver"),
      "Failed to open I2C bus %s: %s", i2c_bus.c_str(), std::strerror(errno));
    return false;
  }

  // Tell the kernel driver which slave address we're talking to
  if (ioctl(fd_, I2C_SLAVE, address_) < 0)
  {
    RCLCPP_ERROR(
      rclcpp::get_logger("Pca9685Driver"),
      "Failed to set I2C slave address 0x%02X: %s", address_, std::strerror(errno));
    ::close(fd_);
    fd_ = -1;
    return false;
  }

  // --- Mirrors Emakefun_MotorHAT.__init__ / PWM.__init__ ---
  setAllPWM(0, 0);  // helper defined below, mirrors PWM.setAllPWM(0, 0)

  write8(MODE2, OUTDRV);
  write8(MODE1, ALLCALL);
  std::this_thread::sleep_for(std::chrono::milliseconds(5));  // wait for oscillator

  uint8_t mode1 = read8(MODE1);
  mode1 = mode1 & ~SLEEP;  // wake up (clear sleep bit)
  write8(MODE1, mode1);
  std::this_thread::sleep_for(std::chrono::milliseconds(5));  // wait for oscillator

  setPWMFreq(freq_hz);

  return true;
}

void Pca9685Driver::close()
{
  if (fd_ >= 0)
  {
    ::close(fd_);
    fd_ = -1;
  }
}

void Pca9685Driver::write8(uint8_t reg, uint8_t value)
{
  uint8_t buf[2] = {reg, value};
  if (::write(fd_, buf, 2) != 2)
  {
    RCLCPP_ERROR(
      rclcpp::get_logger("Pca9685Driver"),
      "I2C write8 failed (reg 0x%02X, value 0x%02X): %s", reg, value, std::strerror(errno));
  }
}

uint8_t Pca9685Driver::read8(uint8_t reg)
{
  if (::write(fd_, &reg, 1) != 1)
  {
    RCLCPP_ERROR(
      rclcpp::get_logger("Pca9685Driver"),
      "I2C read8 (select register 0x%02X) failed: %s", reg, std::strerror(errno));
    return 0;
  }
  uint8_t value = 0;
  if (::read(fd_, &value, 1) != 1)
  {
    RCLCPP_ERROR(
      rclcpp::get_logger("Pca9685Driver"),
      "I2C read8 (reg 0x%02X) failed: %s", reg, std::strerror(errno));
    return 0;
  }
  return value;
}

void Pca9685Driver::setPWMFreq(double freq_hz)
{
  // Port of PWM.setPWMFreq — 25MHz internal oscillator, 12-bit counter
  double prescaleval = 25000000.0;
  prescaleval /= 4096.0;
  prescaleval /= freq_hz;
  prescaleval -= 1.0;

  uint8_t prescale = static_cast<uint8_t>(std::floor(prescaleval + 0.5));

  uint8_t oldmode = read8(MODE1);
  uint8_t newmode = (oldmode & 0x7F) | 0x10;  // sleep bit set

  write8(MODE1, newmode);          // go to sleep
  write8(PRESCALE, prescale);      // set the prescaler
  write8(MODE1, oldmode);
  std::this_thread::sleep_for(std::chrono::milliseconds(5));
  write8(MODE1, oldmode | 0x80);   // restart bit
}

void Pca9685Driver::setPWM(uint8_t channel, uint16_t on, uint16_t off)
{
  write8(LED0_ON_L + 4 * channel, on & 0xFF);
  write8(LED0_ON_H + 4 * channel, on >> 8);
  write8(LED0_OFF_L + 4 * channel, off & 0xFF);
  write8(LED0_OFF_H + 4 * channel, off >> 8);
}

void Pca9685Driver::setAllPWM(uint16_t on, uint16_t off)
{
  write8(ALL_LED_ON_L, on & 0xFF);
  write8(ALL_LED_ON_H, on >> 8);
  write8(ALL_LED_OFF_L, off & 0xFF);
  write8(ALL_LED_OFF_H, off >> 8);
}

void Pca9685Driver::setPin(uint8_t channel, bool value)
{
  // Port of Emakefun_MotorHAT.setPin
  if (value)
  {
    setPWM(channel, 4096, 0);
  }
  else
  {
    setPWM(channel, 0, 4096);
  }
}

}  // namespace land_description