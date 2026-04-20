#include <iostream>
using namespace std;

class Complex {
private:
    int real, imag;

public:
    Complex(int r = 0, int i = 0) {
        real = r;
        imag = i;
    }

    void getData() {
        cout << "Enter real part: ";
        cin >> real;
        cout << "Enter imaginary part: ";
        cin >> imag;
    }

    void display() {
        cout << real << " + " << imag << "i" << endl;
    }

    Complex operator + (Complex c) 
        return Complex(real + c.real, imag + c.imag);
    }

    Complex operator * (Complex c) {
        Complex temp;
        temp.real = (real * c.real) - (imag * c.imag);
        temp.imag = (real * c.imag) + (imag * c.real);
        return temp;
    }
};

int main() {
    Complex c1, c2, c3, sum, product;

    cout << "Enter First Complex Number:\n";
    c1.getData();

    cout << "Enter Second Complex Number:\n";
    c2.getData();

    cout << "Enter Third Complex Number:\n";
    c3.getData();

    sum = c1 + c2 + c3;

    product = c1 * c2;

    cout << "\nFirst Complex Number: ";
    c1.display();

    cout << "Second Complex Number: ";
    c2.display();

    cout << "Third Complex Number: ";
    c3.display();

    cout << "\nSum of 3 Complex Numbers: ";
    sum.display();

    cout << "Multiplication of First Two: ";
    product.display();

    return 0;
}