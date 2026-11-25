// ACTIVITY 1: POINTER ARITHMETIC
#include <iostream>
using namespace std;

int main() {
    int numbers[5] = {10, 20, 30, 40, 50};

    // Array name decays to a pointer to its first element
    int* ptr = numbers;

    cout << "Array elements accessed via pointer arithmetic:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Value: " << *ptr << endl;  // dereference: get the value
        ptr++;                              // move to the next int (4 bytes)
    }

    // Reset the pointer to the start
    ptr = numbers;

    cout << "\nAccessing using offset arithmetic:" << endl;
    for (int i = 0; i < 5; i++) {
        // *(ptr + i) is the same as numbers[i]
        cout << "Index " << i << " has value: " << *(ptr + i) << endl;
    }

    return 0;
}