/*CPP Code For T0-Do-List Manager*/
#include <iostream>
#include <string>
using namespace std;
const int MAX_TASKS = 100;
struct Task {
    string description;
    bool completed;
    Task() {
        description = "";
        completed = false;
    }
    Task(string desc) {
        description = desc;
        completed = false;
    }
};
void addTask(Task tasks[], int& taskCount) {
    if (taskCount >= MAX_TASKS) {
        cout << "Task limit reached! Cannot add more tasks.\n";
        return;
    }
    cin.ignore(); 
    string taskDesc;
    cout << "Enter task description: ";
    getline(cin, taskDesc);
    tasks[taskCount++] = Task(taskDesc);
    cout << "Task added!\n";
}
void viewTasks(const Task tasks[], int taskCount) {
    if (taskCount == 0) {
        cout << "No tasks to display.\n";
        return;
    }
    cout << "\nTo-Do List:\n";
    for (int i = 0; i < taskCount; ++i) {
        cout << i + 1 << ". " << tasks[i].description
             << " [" << (tasks[i].completed ? "Completed" : "Pending") << "]\n";
    }
    cout << endl;
}
void markCompleted(Task tasks[], int taskCount) {
    if (taskCount == 0) {
        cout << "No tasks to mark.\n";
        return;
    }
    int index;
    viewTasks(tasks, taskCount);
    cout << "Enter task number to mark as completed: ";
    cin >> index;
    if (index < 1 || index > taskCount) {
        cout << "Invalid task number!\n";
    } else {
        tasks[index - 1].completed = true;
        cout << "Task marked as completed.\n";
    }
}
void removeTask(Task tasks[], int& taskCount) {
    if (taskCount == 0) {
        cout << "No tasks to remove.\n";
        return;
    }
    int index;
    viewTasks(tasks, taskCount);
    cout << "Enter task number to remove: ";
    cin >> index;
    if (index < 1 || index > taskCount) {
        cout << "Invalid task number!\n";
    } else {
        for (int i = index - 1; i < taskCount - 1; ++i) {
            tasks[i] = tasks[i + 1];
        }
        --taskCount;
        cout << "Task removed.\n";
    }
}
int main() {
    Task tasks[MAX_TASKS];
    int taskCount = 0;
    int choice;
    do {
        cout << "\n--- To-Do List Manager ---\n";
        cout << "1. Add Task\n";
        cout << "2. View Tasks\n";
        cout << "3. Mark Task as Completed\n";
        cout << "4. Remove Task\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
            case 1: addTask(tasks, taskCount); break;
            case 2: viewTasks(tasks, taskCount); break;
            case 3: markCompleted(tasks, taskCount); break;
            case 4: removeTask(tasks, taskCount); break;
            case 5: cout << "Exiting To-Do List Manager\n"; break;
            default: cout << "Invalid choice. Try again.\n"; break;
        }
    } while (choice != 5);
    return 0;
}
