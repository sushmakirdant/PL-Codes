#include <iostream>
using namespace std;

class Shape {
public:
    virtual void area() = 0;
};

class Rectangle : public Shape {
private:
    int l, b;

public:
    void getData() {
        cout << "Enter length and breadth: ";
        cin >> l >> b;
    }

    void area() {
        cout << "Area of Rectangle = " << l * b << endl;
    }
};

class Circle : public Shape {
private:
    float r;

public:
    void getData() {
        cout << "Enter radius: ";
        cin >> r;
    }

    void area() {
        cout << "Area of Circle = " << 3.14 * r * r << endl;
    }
};

int main() {
    Rectangle r;
    Circle c;

    r.getData();
    r.area();

    c.getData();
    c.area();

    return 0;
}