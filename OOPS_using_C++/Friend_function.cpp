#include <iostream>
using namespace std;

class Complex {
    float real, imag;

public:
    // Default constructor
    Complex() {
        real = 0;
        imag = 0;
    }

    // Parameterized constructor
    Complex(float r, float i) {
        real = r;
        imag = i;
    }

    // Friend function declaration for overloading +
    friend Complex operator + (Complex c1, Complex c2);

    // Function to display complex number
    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};

// Definition of friend function
Complex operator + (Complex c1, Complex c2) {
    Complex temp;
    temp.real = c1.real + c2.real;
    temp.imag = c1.imag + c2.imag;
    return temp;
}

int main() {
    Complex c1(2.5, 3.5);
    Complex c2(1.5, 4.0);

    cout << "First Complex number: ";
    c1.display();

    cout << "Second Complex number: ";
    c2.display();

    Complex sum = c1 + c2;

    cout << "\nSum: ";
    sum.display();

    return 0;
}
