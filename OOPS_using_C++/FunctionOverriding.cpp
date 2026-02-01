#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    // Virtual function
    virtual void sound() {
        cout << "Animal makes a sound." << endl;
    }
};

// Derived class
class Dog : public Animal {
public:
    // Overriding base class function
    void sound() override {
        cout << "Dog barks: Woof Woof!" << endl;
    }
};

// Another derived class
class Cat : public Animal {
public:
    void sound() override {
        cout << "Cat meows: Meow Meow!" << endl;
    }
};

int main() {
    Animal *a;

    Dog d;
    Cat c;

    // Base class pointer pointing to derived objects
    a = &d;
    a->sound();  // Calls Dog's sound()

    a = &c;
    a->sound();  // Calls Cat's sound()

    return 0;
}
