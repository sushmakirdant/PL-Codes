#include <iostream>
using namespace std;

class Demo {
public:
    int a;

    Demo(int x) {
        a = x;
    }

    Demo(Demo &d) {
        a = d.a;
    }

    void display() {
        cout << "Value = " << a << endl;
    }
};

int main() {
    Demo d1(10);
    Demo d2 = d1;  

    d1.display();
    d2.display();
}