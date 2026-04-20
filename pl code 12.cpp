#include <iostream>
using namespace std;

class Sample {
private:
    int num;

public:
    void setData(int n) {
        num = n;
    }

    friend void show(Sample s);
};

void show(Sample s) {
    cout << "Value of num = " << s.num << endl;
}

int main() {
    Sample obj;

    obj.setData(50);

    show(obj);

    return 0;
}