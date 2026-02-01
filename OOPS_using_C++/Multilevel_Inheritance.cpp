#include <iostream>
using namespace std;

// Base class
class A {
public:
    void showA() {
        cout << "Class A Function" << endl;
    }
};

// Single Inheritance
class B : public A {
public:
    void showB() {
        cout << "Class B Function" << endl;
    }
};

// Multilevel Inheritance
class C : public B {
public:
    void showC() {
        cout << "Class C Function" << endl;
    }
};

int main() {
    C obj;

    obj.showA();
    obj.showB();
    obj.showC();

    return 0;
}
