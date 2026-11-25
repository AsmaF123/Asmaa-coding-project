// ============================================================
// ACTIVITY 1: LINEAR SEARCH IN AN INTEGER ARRAY
// Learning Outcome: Apply linear search
// ============================================================

#include <iostream>
using namespace std;

// Returns the index of target if found, -1 if not found
int linearSearch(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i;  // match found: return the index immediately
        }
    }
    return -1;  // loop finished without finding the target
}

int main() {
    int numbers[8] = {15, 42, 7, 89, 23, 56, 11, 74};

    // Number of elements in the array
    int size = sizeof(numbers) / sizeof(numbers[0]);

    int target;

    cout << "Array contents: ";
    for (int i = 0; i < size; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    cout << "Enter a number to search: ";
    cin >> target;

    int position = linearSearch(numbers, size, target);

    if (position != -1) {
        cout << "Element found at index: " << position << endl;
    } else {
        cout << "Element not found in the array." << endl;
    }

    return 0;
}