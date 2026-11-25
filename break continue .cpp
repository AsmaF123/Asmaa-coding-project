// ============================================================
// ACTIVITY 2: BREAK AND CONTINUE IN LOOPS
// Learning Outcome: Analyse break and continue statements
// ============================================================

#include <iostream>
using namespace std;

int main() {
    cout << "Number filter: Skip multiples of 3, stop at 15" << endl;

    for (int i = 1; i <= 20; i++) {

        // break exits the loop completely
        if (i == 15) {
            cout << "Breaking at " << i << "!" << endl;
            break;
        }

        // continue skips the rest of this iteration
        if (i % 3 == 0) {
            continue;
        }

        // Only runs if we did NOT break and did NOT continue
        cout << i << " ";
    }

    cout << endl;

    return 0;
}