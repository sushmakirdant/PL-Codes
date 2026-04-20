#include <iostream>
using namespace std;

class Mobile {
private:
    string brand;
    int price;

public:
    Mobile(string b, int p) {
        brand = b;
        price = p;
    }

    void display() {
        cout << "Brand: " << brand << endl;
        cout << "Price: " << price << endl;
    }
};

int main() {
    Mobile m1("Samsung", 20000);
    m1.display();
    return 0;
}