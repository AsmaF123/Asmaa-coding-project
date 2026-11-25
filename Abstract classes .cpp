// ACTIVITY 3: ABSTRACT CLASSES
#include <iostream>
using namespace std;

class Shape {
public:
    // Pure virtual function: makes Shape abstract
    virtual double calculateArea() = 0;
};

class Square : public Shape {
private:
    double side;
public:
    Square(double s) { side = s; }

    double calculateArea() {
        return side * side;
    }
};

class Circle : public Shape {
private:
    double radius;
public:
    Circle(double r) { radius = r; }

    double calculateArea() {
        return 3.14159 * radius * radius;
    }
};

int main() {
    // Uncomment to see the compiler error:
    // Shape myShape;   // ERROR: cannot instantiate an abstract class

    Square s(5.0);
    Circle c(3.0);

    cout << "Area of Square: " << s.calculateArea() << endl;
    cout << "Area of Circle: " << c.calculateArea() << endl;

    return 0;
}