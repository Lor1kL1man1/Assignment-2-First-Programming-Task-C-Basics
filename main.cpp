#include <iostream>
#include <string>

using namespace std;

int main() {
    // TODO: Declare variables
    string fullName;
    int age;
    string studyProgram;

    // TODO: Ask user for input
    cout << "Enter your full name: ";
    getline(cin, fullName);

    cout << "Enter your age: ";
    cin >> age;
    cin.ignore(); // Ignore leftover newline

    cout << "Enter your study program: ";
    getline(cin, studyProgram);

    // TODO: Display the information
    cout << "\nStudent Information\n";
    cout << "-------------------\n";
    cout << "Name: " << fullName << endl;
    cout << "Age: " << age << endl;
    cout << "Program: " << studyProgram << endl;

    return 0;
}

