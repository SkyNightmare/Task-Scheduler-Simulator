#include "Task.hpp"
#include <iostream>
#include <thread>
#include <chrono>

Task::Task(int id, int priority, int durationMs)
    : id_(id), priority_(priority), durationMs_(durationMs) {}

int Task::getPriority() const {
    return priority_;
}

void Task::execute() const {
    std::cout << "[Task " << id_ << "] Started (Priority "
              << priority_ << ")\n";

    std::this_thread::sleep_for(
        std::chrono::milliseconds(durationMs_)
    );

    std::cout << "[Task " << id_ << "] Finished\n";
}
