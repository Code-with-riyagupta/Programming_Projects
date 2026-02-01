#include <iostream>
using namespace std;

// Base Class
class Animal {
public:
    void eat() {
        cout << "Animal is eating..." << endl;
    }
};

// Derived Class
class Dog : public Animal {
public:
    void bark() {
        cout << "Dog is barking... Woof Woof!" << endl;
    }
};

int main() {
    Dog d;

    d.eat();   // Base class function
    d.bark();  // Derived class function

    return 0;
}
