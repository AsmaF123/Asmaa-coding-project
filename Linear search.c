// ============================================================
// ACTIVITY 1: LINEAR SEARCH IN AN INTEGER ARRAY (C VERSION)
// Learning Outcome: Apply linear search
// ============================================================

#include <stdio.h>

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

    // sizeof(numbers) = total bytes, sizeof(numbers[0]) = bytes of one element
    int size = sizeof(numbers) / sizeof(numbers[0]);

    int target;

    printf("Array contents: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    printf("Enter a number to search: ");
    scanf("%d", &target);  // & is required for scanf

    int position = linearSearch(numbers, size, target);

    if (position != -1) {
        printf("Element found at index: %d\n", position);
    } else {
        printf("Element not found in the array.\n");
    }

    return 0;
}