#include <iostream>
using namespace std;

class Employee {
protected:
    int empID;
    string name;

public:
    void getEmployee() {
        cout << "Enter Employee ID: ";
        cin >> empID;
        cout << "Enter Name: ";
        cin >> name;
    }
};

class Department : public Employee {
protected:
    string deptName;

public:
    void getDept() {
        cout << "Enter Department: ";
        cin >> deptName;
    }
};

class PF : public Department {
protected:
    float basic, pf;

public:
    void getPF() {
        cout << "Enter Basic Salary: ";
        cin >> basic;
        pf = basic * 0.12;
    }

    void display() {
        cout << "\n--- Employee Details ---\n";
        cout << "ID: " << empID << endl;
        cout << "Name: " << name << endl;
        cout << "Department: " << deptName << endl;
        cout << "Basic Salary: " << basic << endl;
        cout << "PF Amount: " << pf << endl;
    }
};

class Info : public Employee {
public:
    void showBasic() {
        cout << "\n(Basic Info)\n";
        cout << "ID: " << empID << " Name: " << name << endl;
    }
};

int main() {
    PF e1;     
    Info e2;

    cout << "=== Enter Full Employee Details ===\n";
    e1.getEmployee();
    e1.getDept();
    e1.getPF();

    e1.display();

    cout << "\n=== Basic Info (Hierarchical) ===\n";
    e2.getEmployee();
    e2.showBasic();

    return 0;
}