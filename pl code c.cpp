#include <iostream>
using namespace std;

class Shop {
public:
    void discount(int price) {
        cout << "Discounted Price: " << price - 50 << endl;
    }

    void discount(int price, int extra) {
        cout << "Discounted Price: " << price - extra << endl;
    }
};

int main() {
    Shop s;
    s.discount(500);
    s.discount(500,100);
}