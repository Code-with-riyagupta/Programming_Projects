#include <iostream>
using namespace std;
// Area of Square
float area(float side) {
    return side * side;
}
// Area of Rectangle
float Calculatearea(float length, float breadth) {
    return length * breadth;
}
// Area of Circle
float Calculatearea(double radius) {
    return 3.14159 * radius * radius;
}
// Area of Triangle
float calculatearea(float base, float height, bool isTriangle) {
    return 0.5 * base * height;
}
int main() {
    float side, length, breadth, base, height;
    double radius;

    cout << "Area Calculation using Function Overloading\n\n";
    // Square
    cout << "Enter side of square: ";
    cin >> side;
    cout << "Area of Square: " << area(side) << endl;
  
    // Rectangle
    cout << "\nEnter length of rectangle: ";
    cin >> length;
    cout << "Enter breadth of rectangle: ";
    cin >> breadth;
    cout << "Area of Rectangle: " << area(length, breadth) << endl;

    // Circle
    cout << "\nEnter radius of circle: ";
    cin >> radius;
    cout << "Area of Circle: " << area(radius) << endl;

    // Triangle
    cout << "\nEnter base of triangle: ";
    cin >> base;
    cout << "Enter height of triangle: ";
    cin >> height;
    cout << "Area of Triangle: " << area(base, height, true) << endl;
    return 0;
}
