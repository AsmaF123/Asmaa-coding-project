// ACTIVITY 1: BASIC INHERITANCE
#include <iostream>
#include <string>
using namespace std;

// BASE CLASS (Parent)
class Shape {
protected:
    // protected: like private, but derived classes CAN access it
    string color;

public:
    Shape(string c) {
        color = c;
        cout << "Shape constructor called." << endl;
    }

    void displayColor() {
        cout << "This shape's color is: " << color << endl;
    }
};

// DERIVED CLASS: Circle inherits from Shape
class Circle : public Shape {
private:
    double radius;

public:
    // Must call the base class constructor
    Circle(string c, double r) : Shape(c) {
        radius = r;
        cout << "Circle constructor called." << endl;
    }

    void displayCircleInfo() {
        cout << "This circle is " << color << " and has a radius of " << radius << endl;
    }
};

// DERIVED CLASS: Rectangle inherits from Shape
class Rectangle : public Shape {
private:
    double width, height;

public:
    Rectangle(string c, double w, double h) : Shape(c) {
        width = w;
        height = h;
        cout << "Rectangle constructor called." << endl;
    }

    void displayRectangleInfo() {
        cout << "This rectangle is " << color << " and is " << width << "x" << height << endl;
    }
};

int main() {
    cout << "--- Creating a Circle ---" << endl;
    Circle myCircle("Red", 5.0);
    myCircle.displayColor();        // inherited from Shape
    myCircle.displayCircleInfo();   // unique to Circle

    cout << "\n--- Creating a Rectangle ---" << endl;
    Rectangle myRect("Blue", 4.0, 6.0);
    myRect.displayColor();          // inherited from Shape
    myRect.displayRectangleInfo();  // unique to Rectangle

    return 0;
}