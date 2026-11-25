// ============================================================
// ACTIVITY 4: MULTIPLICATION TABLE USING NESTED LOOPS
// Learning Outcome: Create a nested loop structure
// ============================================================

#include <iostream>
#include <iomanip>  // for setw
using namespace std;

int main() {
    cout << "========================================" << endl;
    cout << "    MULTIPLICATION TABLE (1 to 10)" << endl;
    cout << "========================================" << endl;
    cout << endl;

    // OUTER LOOP: rows
    for (int i = 1; i <= 10; i++) {

        // INNER LOOP: columns (runs completely for each row)
        for (int j = 1; j <= 10; j++) {
            cout << setw(5) << i * j;
        }

        cout << endl;  // new line after each row
    }

    cout << "========================================" << endl;

    return 0;
}