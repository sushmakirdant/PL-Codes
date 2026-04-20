#include <iostream>
using namespace std;

class Payment {
public:
    virtual void pay() {
        cout << "Making generic payment\n";
    }
};

class UPI : public Payment {
public:
    void pay() {
        cout << "Payment using UPI\n";
    }
};

class Card : public Payment {
public:
    void pay() {
        cout << "Payment using Card\n";
    }
};

int main() {
    Payment* p;
    UPI u;
    Card c;

    p = &u;
    p->pay();

    p = &c;
    p->pay();

    return 0;
}