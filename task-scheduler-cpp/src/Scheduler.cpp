#include "Scheduler.hpp"
#include <algorithm>
#include <thread>

void Scheduler::addTask(std::shared_ptr<Task> task) {
    std::lock_guard<std::mutex> lock(mutex_);
    tasks_.push_back(task);
}

void Scheduler::run() {
    std::sort(tasks_.begin(), tasks_.end(),
        [](const auto& a, const auto& b) {
            return a->getPriority() > b->getPriority();
        }
    );

    std::vector<std::thread> threads;

    for (const auto& task : tasks_) {
        threads.emplace_back([task]() {
            task->execute();
        });
    }

    for (auto& t : threads) {
        if (t.joinable()) {
            t.join();
        }
    }
}
