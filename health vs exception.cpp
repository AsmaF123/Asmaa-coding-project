// ACTIVITY 3: RETURN CODES VS EXCEPTIONS
#include <iostream>
#include <fstream>
#include <string>
#include <stdexcept>   // standard exceptions
using namespace std;

// METHOD 1: Return codes. Returns true on success, false on failure.
bool readFileWithReturnCode(const string& filename) {
    ifstream file(filename);
    if (!file.is_open()) {
        return false;
    }
    // ... read file ...
    return true;
}

// METHOD 2: Exceptions. Throws on failure.
void readFileWithException(const string& filename) {
    ifstream file(filename);
    if (!file.is_open()) {
        throw runtime_error("File not found: " + filename);
    }
    // ... read file ...
}

int main() {
    cout << "--- Testing Return Code Strategy ---" << endl;
    if (readFileWithReturnCode("data.txt") == false) {
        cout << "Return Code: Handled error gracefully. Program continues." << endl;
    }

    cout << "\n--- Testing Exception Strategy ---" << endl;
    try {
        readFileWithException("data.txt");
    }
    catch (const runtime_error& e) {
        cout << "Exception Caught: " << e.what() << endl;
        cout << "Exception Strategy: Forced us to handle the error!" << endl;
    }

    return 0;
}