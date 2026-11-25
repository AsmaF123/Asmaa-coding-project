// ============================================================
// ACTIVITY 3A: INPUT VALIDATION WITH WHILE LOOP
// Learning Outcome: Evaluate while vs do-while for validation
// ============================================================

#include <iostream>
using namespace std;

int main() {
    int number;

    cout << "Enter a positive number: ";
    // Read BEFORE the loop, because while checks the condition first
    cin >> number;

    while (number <= 0) {
        cout << "Invalid! Please enter a positive number: ";
        cin >> number;
    }

    cout << "You entered: " << number << endl;

    return 0;
}