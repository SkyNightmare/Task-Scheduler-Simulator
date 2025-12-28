#include "Scheduler.hpp"
#include <memory>

int main() {
    Scheduler scheduler;

    scheduler.addTask(std::make_shared<Task>(1, 3, 1500));
    scheduler.addTask(std::make_shared<Task>(2, 1, 3000));
    scheduler.addTask(std::make_shared<Task>(3, 5, 1000));

    scheduler.run();

    return 0;
}
