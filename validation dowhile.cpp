// ============================================================
// ACTIVITY 3B: INPUT VALIDATION WITH DO-WHILE LOOP
// Learning Outcome: Evaluate while vs do-while for validation
// ============================================================

#include <iostream>
using namespace std;

int main() {
    int number = 0;

    // do-while runs the body FIRST, then checks the condition
    do {
        cout << "Enter a positive number: ";
        cin >> number;

        if (number <= 0) {
            cout << "Invalid! ";
        }

    } while (number <= 0);

    cout << "You entered: " << number << endl;

    return 0;
}