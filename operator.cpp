#include <iostream>
using namespace std;

class Complex {
private:
    int real, imag;

public:
    // Parameterized constructor
    Complex(int r = 0, int i = 0) : real(r), imag(i) {}

    // Default constructor
    Complex() : real(0), imag(0) {}

    // Overloaded + operator
    Complex operator + (Complex const& obj) const {
        Complex res;
        res.real = real + obj.real;
        res.imag = imag + obj.imag;
        return res;
    }

    // Print method
    void print() const {
        cout << real << "+i" << imag << '\n';
    }
};

int main() {
    Complex c1(10, 5), c2(2, 4);
    Complex c3 = c1 + c2;  // Added missing semicolon
    c3.print();
}
//12+i9
