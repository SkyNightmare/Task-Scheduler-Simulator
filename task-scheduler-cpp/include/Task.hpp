#pragma once
#include <string>

class Task {
public:
    Task(int id, int priority, int durationMs);

    int getPriority() const;
    void execute() const;

private:
    int id_;
    int priority_;
    int durationMs_;
};
