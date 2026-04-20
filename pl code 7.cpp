#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int age;

public:
    Student() {
        name = "Unknown";
        age = 0;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

int main() {
    Student s1;

    s1.display();

    return 0;
}