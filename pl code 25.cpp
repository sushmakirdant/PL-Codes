#include <iostream>
using namespace std;

template <class T>
T add(T a, T b) {
    return a + b;
}

int main() {
    cout << "Sum of integers: " << add<int>(10, 20) << endl;
    cout << "Sum of floats: " << add<float>(2.5, 3.5) << endl;

    return 0;
}