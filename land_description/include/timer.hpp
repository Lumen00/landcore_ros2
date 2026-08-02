// https://gist.githubusercontent.com/mcleary/b0bf4fa88830ff7c882d/raw/b34158a8f2ce6f2e9e67175a4b12f5adb8ad423d/Timer.cpp
#include <iostream>
#include <chrono>
#include <ctime>
#include <cmath>

class Timer
{
public:
    void start();
    
    void stop();
    
    double elapsedMilliseconds();
    
    double elapsedSeconds();

private:
    std::chrono::time_point<std::chrono::system_clock> m_StartTime;
    std::chrono::time_point<std::chrono::system_clock> m_EndTime;
    bool                                               m_bRunning = false;
};

long fibonacci(unsigned n);
