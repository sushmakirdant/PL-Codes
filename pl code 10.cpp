#include <iostream>
using namespace std;

class Add {
private:
    int a, b;

public:
    void getData() {
        cout << "Enter two numbers: ";
        cin >> a >> b;
    }

    inline int sum() {
        return a + b;
    }

    void display() {
        cout << "Sum = " << sum() << endl;
    }
};

int main() {
    Add obj;

    obj.getData();
    obj.display();

    return 0;
}