#include <iostream>
using namespace std;

class Demo {
private:
    static int count;  

public:
    static void showCount() {
        cout << "Count = " << count << endl;
    }

    void increment() {
        count++;
    }
};

int Demo::count = 0;

int main() {
    Demo d1, d2;

    d1.increment();
    d2.increment();
    d1.increment();

    Demo::showCount();

    return 0;
}