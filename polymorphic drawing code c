// ACTIVITY 4: POLYMORPHIC DRAWING PROGRAM
#include <stdio.h>

// Base struct
struct Shape {
    void (*draw)();
};

// Derived structs
struct Circle {
    struct Shape base;
};

struct Rectangle {
    struct Shape base;
};

struct Triangle {
    struct Shape base;
};

// Specific draw functions
void drawCircle()    { printf("Drawing a Circle ◯\n"); }
void drawRectangle() { printf("Drawing a Rectangle ▭\n"); }
void drawTriangle()  { printf("Drawing a Triangle △\n"); }

// A polymorphic function: works on any shape
void renderCanvas(struct Shape* shapePtr) {
    shapePtr->draw();
}

int main() {
    // Create the derived objects and set their function pointers
    struct Circle c1;    c1.base.draw = drawCircle;
    struct Rectangle r1; r1.base.draw = drawRectangle;
    struct Triangle t1;  t1.base.draw = drawTriangle;
    struct Circle c2;    c2.base.draw = drawCircle;

    // Array of base struct pointers
    struct Shape* canvas[4];
    canvas[0] = (struct Shape*)&c1;
    canvas[1] = (struct Shape*)&r1;
    canvas[2] = (struct Shape*)&t1;
    canvas[3] = (struct Shape*)&c2;

    printf("--- Rendering Canvas ---\n");

    for (int i = 0; i < 4; i++) {
        renderCanvas(canvas[i]);
    }

    return 0;
}