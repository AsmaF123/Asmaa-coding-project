// ACTIVITY 2: VIRTUAL FUNCTIONS
// Part A is the original (no virtual). Part B is the fix (with virtual).
#include <iostream>
using namespace std;

// ---------- PART A: WITHOUT virtual (static binding) ----------
class Animal {
public:
    void speak() {
        cout << "Animal makes a generic sound." << endl;
    }
};

class Dog : public Animal {
public:
    void speak() {
        cout << "Dog barks: Woof! Woof!" << endl;
    }
};

// ---------- PART B: WITH virtual (dynamic binding) ----------
class VAnimal {
public:
    virtual void speak() {
        cout << "Animal makes a generic sound." << endl;
    }
    virtual ~VAnimal() {}   // virtual destructor so delete via base pointer is safe
};

class VDog : public VAnimal {
public:
    void speak() override {
        cout << "Dog barks: Woof! Woof!" << endl;
    }
};

int main() {
    cout << "--- Without Virtual Keyword ---" << endl;
    Dog d;
    Animal* myPet = &d;   // base pointer to derived object
    myPet->speak();       // prints the ANIMAL version

    cout << "\n--- With Virtual Keyword (The Fix) ---" << endl;
    VAnimal* myPet2 = new VDog();
    myPet2->speak();      // prints the DOG version
    delete myPet2;

    return 0;
}