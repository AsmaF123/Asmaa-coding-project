// ACTIVITY 1: ENCAPSULATION & ACCESS SPECIFIERS
#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int age;

public:
    // Constructor: uses the setter so validation applies from the start
    Student(string studentName, int studentAge) {
        name = studentName;
        setAge(studentAge);
    }

    // Getter for name
    string getName() {
        return name;
    }

    // Setter for age, with validation
    void setAge(int newAge) {
        if (newAge > 0 && newAge < 120) {
            age = newAge;
        } else {
            cout << "Error: Invalid age! Age must be between 1 and 119." << endl;
            age = 0;
        }
    }

    // Getter for age
    int getAge() {
        return age;
    }
};

int main() {
    Student s1("Alice", 20);

    cout << "Student Name: " << s1.getName() << endl;
    cout << "Student Age: " << s1.getAge() << endl;

    cout << "\nAttempting to change age to 25..." << endl;
    s1.setAge(25);
    cout << "New Age: " << s1.getAge() << endl;

    cout << "\nAttempting to change age to -5..." << endl;
    s1.setAge(-5);  // triggers validation error
    cout << "Age after invalid attempt: " << s1.getAge() << endl;

    // Uncommenting these causes a compilation error (private members):
    // s1.age = 30;
    // s1.name = "Bob";

    return 0;
}