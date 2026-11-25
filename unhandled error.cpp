// ACTIVITY 2: IGNORING FILE ERRORS
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    // This file DOES NOT EXIST
    ifstream myFile("missing_file.txt");

    // NOTE: we deliberately skip the is_open() check

    string data;

    cout << "Attempting to read from missing file..." << endl;

    // Reading from a failed stream silently does nothing
    myFile >> data;

    cout << "Data read: " << data << endl;
    cout << "Program continued running without crashing." << endl;

    return 0;
}