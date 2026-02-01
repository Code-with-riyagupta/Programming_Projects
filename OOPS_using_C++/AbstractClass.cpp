#include <iostream>
using namespace std;
// Abstract Class
class Shape {
public:
    // Pure virtual function (makes class abstract)
    virtual void draw() = 0;
    void info() {
        cout << "This is a Shape class (Abstract Class)" << endl;
    }
};
class Circle : public Shape {
public:
    void draw() {
        cout << "Drawing a Circle" << endl;
    }
};
class Rectangle : public Shape {
public:
    void draw(){
        cout << "Drawing a Rectangle" << endl;
    }
};
int main() {
    Shape *s;   // pointer object of abstract class
    Circle c;
    Rectangle r;
  
    s = &c;
    s->info();
    s->draw();

    s = &r;
    s->draw();

    return 0;
}
