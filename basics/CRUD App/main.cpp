// Example Todo List CRUD App in C++

#include <iostream>
#include <vector>
#include <string>

struct Todo {
    std::string task;
    bool completed;
};

std::vector<Todo> todos;

void createTodo() {
    std::string task;
    std::cout << "Enter a task: ";
    std::getline(std::cin, task);
    todos.push_back({task, false});
}

void readTodos() {
    for (int i = 0; i < todos.size(); i++) {
        std::cout << i + 1 << ". " << (todos[i].completed ? "[x] " : "[ ] ") << todos[i].task << "\n";
    }
}

void updateTodo() {
    int id;
    std::cout << "Enter the number of the task you want to update: ";
    std::cin >> id;
    std::cin.ignore();
    if (id > 0 && id <= todos.size()) {
        std::string task;
        std::cout << "Enter a new task: ";
        std::getline(std::cin, task);
        todos[id - 1].task = task;
    }
}

void deleteTodo() {
    int id;
    std::cout << "Enter the number of the task you want to delete: ";
    std::cin >> id;
    if (id > 0 && id <= todos.size()) {
        todos.erase(todos.begin() + id - 1);
    }
}

int main() {
    int choice;
    do {
        std::cout << "1. Add task\n2. View tasks\n3. Update task\n4. Delete task\n5. Exit\nEnter your choice: ";
        std::cin >> choice;
        std::cin.ignore();
        switch (choice) {
            case 1: createTodo(); break;
            case 2: readTodos(); break;
            case 3: updateTodo(); break;
            case 4: deleteTodo(); break;
        }
    } while (choice != 5);
    return 0;
}