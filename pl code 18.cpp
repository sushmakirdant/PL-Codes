#include <iostream>
using namespace std;

class Student {
protected:
    int roll;
    string name;

public:
    void getStudent() {
        cout << "Enter Roll No: ";
        cin >> roll;
        cout << "Enter Name: ";
        cin >> name;
    }
};

class Result : public Student {
private:
    int marks;

public:
    void getResult() {
        cout << "Enter Marks: ";
        cin >> marks;
    }

    void display() {
        cout << "\n--- Student Details ---\n";
        cout << "Roll No: " << roll << endl;
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    Result r;

    r.getStudent(); 
    r.getResult();   
    r.display();

    return 0;
}