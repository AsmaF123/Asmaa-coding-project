// ============================================================
// ACTIVITY 1: SUM OF FIRST N NATURAL NUMBERS
// Learning Outcome: Apply a for loop to iterate over a range
// ============================================================

#include <iostream>
using namespace std;

int main() {
    int n;        // upper limit of the sum
    int sum = 0;  // running total

    cout << "Enter a positive number (N): ";
    cin >> n;

    // Initialisation: i = 1; Condition: i <= n; Increment: i++
    for (int i = 1; i <= n; i++) {
        sum += i;  // same as sum = sum + i
    }

    cout << "The sum of numbers from 1 to " << n << " is: " << sum << endl;

    return 0;
}