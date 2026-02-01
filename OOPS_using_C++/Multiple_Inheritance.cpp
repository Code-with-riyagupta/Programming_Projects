#include <iostream>
using namespace std;

// Base Class 1
class Father {
public:
    void fatherQuality() {
        cout << "Father: Strong and Responsible" << endl;
    }
};

// Base Class 2
class Mother {
public:
    void motherQuality() {
        cout << "Mother: Caring and Kind" << endl;
    }
};

// Derived Class (inherits from both Father and Mother)
class Child : public Father, public Mother {
public:
    void childQuality() {
        cout << "Child: Smart and Active" << endl;
    }
};

int main() {
    Child c;

    c.fatherQuality();  // from Father class
    c.motherQuality();  // from Mother class
    c.childQuality();   // from Child class

    return 0;
}
