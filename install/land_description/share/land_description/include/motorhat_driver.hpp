// pca9685_driver.hpp
#ifndef LAND_DESCRIPTION__PCA9685_DRIVER_HPP_
#define LAND_DESCRIPTION__PCA9685_DRIVER_HPP_

#include <cstdint>
#include <string>

namespace land_description
{
class Pca9685Driver
{
public:
  // i2c_bus: e.g. "/dev/i2c-1", address: e.g. 0x60
  bool open(const std::string & i2c_bus, uint8_t address, double freq_hz = 50.0);
  void close();

  // channel: 0-15. on/off: 0-4095, matching PCA9685 12-bit PWM registers.
  void setPWM(uint8_t channel, uint16_t on, uint16_t off);

  // Mirrors Emakefun_MotorHAT.setPin(): forces channel fully on (1) or off (0)
  void setPin(uint8_t channel, bool value);

  void setAllPWM(uint16_t on, uint16_t off);

private:
  void write8(uint8_t reg, uint8_t value);
  uint8_t read8(uint8_t reg);
  void setPWMFreq(double freq_hz);

  int fd_ = -1;
  uint8_t address_ = 0x60;

  static constexpr uint8_t MODE1 = 0x00;
  static constexpr uint8_t MODE2 = 0x01;
  static constexpr uint8_t PRESCALE = 0xFE;
  static constexpr uint8_t LED0_ON_L = 0x06;
  static constexpr uint8_t LED0_ON_H = 0x07;
  static constexpr uint8_t LED0_OFF_L = 0x08;
  static constexpr uint8_t LED0_OFF_H = 0x09;
  static constexpr uint8_t SLEEP = 0x10;
  static constexpr uint8_t ALLCALL = 0x01;
  static constexpr uint8_t OUTDRV = 0x04;
  static constexpr uint8_t ALL_LED_ON_L = 0xFA;
  static constexpr uint8_t ALL_LED_ON_H = 0xFB;
  static constexpr uint8_t ALL_LED_OFF_L = 0xFC;
  static constexpr uint8_t ALL_LED_OFF_H = 0xFD;  
};
}  // namespace land_description

#endif