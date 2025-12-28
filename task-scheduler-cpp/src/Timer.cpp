#include "Timer.hpp"
#include <thread>

void Timer::sleepMs(int milliseconds) {
    std::this_thread::sleep_for(
        std::chrono::milliseconds(milliseconds)
    );
}
