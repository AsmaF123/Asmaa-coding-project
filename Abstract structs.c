// ACTIVITY 3: SIMULATING ABSTRACT CLASSES
#include <stdio.h>

// Base struct
struct Shape {
    // The "abstract method": declared but not assigned
    double (*calculateArea)(void* derivedShape);
};

// Derived struct 1
struct Square {
    struct Shape base;
    double side;
};

// Derived struct 2
struct Circle {
    struct Shape base;
    double radius;
};

// Specific implementations take void* and cast to the right type
double squareArea(void* shapePtr) {
    struct Square* s = (struct Square*)shapePtr;
    return s->side * s->side;
}

double circleArea(void* shapePtr) {
    struct Circle* c = (struct Circle*)shapePtr;
    return 3.14159 * c->radius * c->radius;
}

int main() {
    // Square: fill the abstract slot
    struct Square sq;
    sq.side = 5.0;
    sq.base.calculateArea = squareArea;

    // Circle: fill the abstract slot
    struct Circle circ;
    circ.radius = 3.0;
    circ.base.calculateArea = circleArea;

    // Pass the address of the derived struct
    printf("Area of Square: %.2f\n", sq.base.calculateArea(&sq));
    printf("Area of Circle: %.2f\n", circ.base.calculateArea(&circ));

    return 0;
}