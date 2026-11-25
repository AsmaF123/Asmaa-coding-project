// ACTIVITY 1: BASIC FILE I/O
// Read numbers from numbers.txt, sum them, write the result to sum.txt
#include <iostream>
#include <fstream>   // required for file input/output
using namespace std;

int main() {
    // 1. Open file for reading
    ifstream inputFile("numbers.txt");

    if (!inputFile.is_open()) {
        cout << "Error: Could not open numbers.txt for reading!" << endl;
        return 1;
    }

    int num;
    int sum = 0;

    cout << "Reading numbers from file..." << endl;

    // 2. Read in a loop (>> returns false at end of file)
    while (inputFile >> num) {
        cout << "Read: " << num << endl;
        sum += num;
    }

    // 3. Close the input file
    inputFile.close();

    cout << "Total Sum: " << sum << endl;

    // 4. Open file for writing (creates or overwrites sum.txt)
    ofstream outputFile("sum.txt");

    if (!outputFile.is_open()) {
        cout << "Error: Could not create sum.txt for writing!" << endl;
        return 1;
    }

    // 5. Write to the file
    outputFile << "The total sum is: " << sum << endl;
    outputFile << "Calculated automatically by the C++ program." << endl;

    // 6. Close the output file
    outputFile.close();

    cout << "Result successfully saved to sum.txt!" << endl;

    return 0;
}