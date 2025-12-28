# Task-Scheduler-Simulator
This project is a Task Scheduler Simulator implemented in C++, inspired by RTOS-style scheduling systems used in embedded and real-time environments.

The goal of this project is to demonstrate solid knowledge of:

- Object-Oriented Programming (OOP)

- Multithreading and synchronization

- Memory management (RAII & smart pointers)

- Scheduling logic (priority-based execution)

The scheduler manages multiple tasks, executes them concurrently, and respects task priorities and timing constraints.

# Features

- Priority-based task scheduling

- Concurrent task execution using std::thread

- Thread-safe task management using std::mutex

- Clean OOP design with clear responsibilities

- Safe memory management using RAII and smart pointers

- Easily extensible architecture (add new task types or scheduling policies)

# Architecture & Design

The system is designed following OOP best practices, with each class having a single, well-defined responsibility.

### Core Classes

*Task*

Represents a unit of work to be executed by the scheduler.

### Responsibilities:

- Stores task ID, priority, and execution time

- Encapsulates the task’s execution logic

- Provides an interface for running the task

*Scheduler*

Controls the lifecycle and execution of tasks.

### Responsibilities:

- Manages a collection of tasks

- Sorts tasks based on priority

- Launches tasks concurrently using std::thread

- Ensures thread-safe access to shared resources using std::mutex

This class simulates how an RTOS scheduler decides which task runs and when.

*Timer*

Handles time-related operations.

### Responsibilities:

- Simulates task execution duration

- Uses std::chrono for accurate timing

- Helps mimic real-time constraints found in embedded systems

### Multithreading & Concurrency

- Tasks are executed using std::thread

- Shared resources are protected using std::mutex

- Demonstrates understanding of:
  - Race conditions

  - Thread synchronization

  - Safe concurrent execution

### Memory Management (RAII)

The project follows RAII (Resource Acquisition Is Initialization) principles:

- Uses std::unique_ptr / std::shared_ptr to manage task objects

- Avoids raw new / delete

- Ensures:
  - No memory leaks

  - Deterministic resource cleanup

  - Exception safety
