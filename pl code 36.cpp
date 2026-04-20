#include <iostream>
using namespace std;

class Rectangle {
public:
    int l, b;

    Rectangle(int x, int y) {
        l = x;
        b = y;
    }

    void area() {
        cout << "Area = " << l * b;
    }
};

int main() {
    Rectangle r(5, 4);
    r.area();
}