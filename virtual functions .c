// ACTIVITY 2: SIMULATING VIRTUAL FUNCTIONS
#include <stdio.h>
#include <string.h>

// Function pointer type: takes no arguments, returns void
typedef void (*SpeakFunction)();

// Base struct
struct Animal {
    SpeakFunction speak;
};

// Derived struct
struct Dog {
    struct Animal base;
};

void genericSound() {
    printf("Animal makes a generic sound.\n");
}

void dogBark() {
    printf("Dog barks: Woof! Woof!\n");
}

int main() {
    printf("--- Simulating Non-Virtual (Base only) ---\n");
    struct Animal myAnimal;
    myAnimal.speak = genericSound;
    myAnimal.speak();

    printf("\n--- Simulating Virtual (Dynamic binding) ---\n");
    struct Dog myDog;

    // "Override": assign dogBark to the inherited function pointer
    myDog.base.speak = dogBark;

    // Treat the Dog as an Animal
    struct Animal* pet = (struct Animal*)&myDog;

    // Calls dogBark through the pointer
    pet->speak();

    return 0;
}