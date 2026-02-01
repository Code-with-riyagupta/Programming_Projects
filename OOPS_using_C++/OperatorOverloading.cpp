#include <iostream>
using namespace std;

class Complex {
    public:
    float real, imag; // Real and Imaginary parts

public:
    // Operator overloading for addition (+)
    Complex operator +  (Complex &c1) {
        Complex c3;
        c3.real = c1.real + this->real;
        c3.imag = c1.imag + this->imag;
        return c3;
    }

    // Operator overloading for subtraction (-)
    Complex operator - (Complex &c1) {
        Complex c3;
        c3.real = c1.real - this->real;
        c3.imag = c1.imag - this->imag;
        return c3;
    }
};

int main() {
    Complex a1,a2;
   a1.real=5;
   a1.imag=10;
   a2.real=3;
   a2.imag=2;
   Complex a3=a1+a2;
   cout<<"real"<<a3.real<<endl<<"imag"<<a3.imag;
    return 0;
}
