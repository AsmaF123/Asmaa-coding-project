// ACTIVITY 2: STACK VS HEAP OBJECTS
#include <iostream>
#include <string>
using namespace std;

class Car {
public:
    string model;

    Car(string m) {
        model = m;
        cout << "Car created: " << model << endl;
    }

    ~Car() {
        cout << "Car destroyed: " << model << endl;
    }
};

int main() {
    cout << "--- Creating Stack Object ---" << endl;
    Car stackCar("Toyota");   // destroyed automatically at end of main

    cout << "\n--- Creating Heap Object ---" << endl;
    Car* heapCar = new Car("Honda");   // must be deleted manually

    cout << "Heap car model: " << heapCar->model << endl;

    cout << "\n--- End of main function ---" << endl;

    delete heapCar;   // triggers Honda's destructor

    // stackCar (Toyota) is destroyed automatically here
    return 0;
}