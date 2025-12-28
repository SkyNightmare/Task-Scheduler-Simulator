#pragma once
#include "Task.hpp"
#include <memory>
#include <vector>
#include <mutex>

class Scheduler {
public:
    void addTask(std::shared_ptr<Task> task);
    void run();

private:
    std::vector<std::shared_ptr<Task>> tasks_;
    std::mutex mutex_;
};
