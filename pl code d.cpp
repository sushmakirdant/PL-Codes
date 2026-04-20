#include <iostream>
using namespace std;

class Employee {
public:
    virtual void work() {
        cout << "Employee working\n";
    }
};

class Manager : public Employee {
public:
    void work() {
        cout << "Manager manages team\n";
    }
};

class Developer : public Employee {
public:
    void work() {
        cout << "Developer writes code\n";
    }
};

int main() {
    Employee* e;
    Manager m;
    Developer d;

    e = &m;
    e->work();

    e = &d;
    e->work();
}