#include <iostream>
using namespace std;

class Parent {
public:
    void show() {
        cout << "Parent class\n";
    }
};

class Child1 : public Parent {
public:
    void display1() {
        cout << "Child1 class\n";
    }
};

class Child2 : public Parent {
public:
    void display2() {
        cout << "Child2 class\n";
    }
};

int main() {
    Child1 c1;
    Child2 c2;

    c1.show();
    c1.display1();

    c2.show();
    c2.display2();
}