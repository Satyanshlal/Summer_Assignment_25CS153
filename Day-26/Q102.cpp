//Write a program to Create voting eligibility system.

#include <iostream>
using namespace std;

int main() {
    int age;
    char isCitizen;

    cout << "Welcome to the Voting Eligibility Checker!" << endl;

    
    cout << "Enter your age: ";
    cin >> age;

    cout << "Are you a citizen of this country? (y/n): ";
    cin >> isCitizen;

    
    if (age >= 18 && (isCitizen == 'y' || isCitizen == 'Y')) {
        cout << "You are eligible to vote." << endl;
    }
    else if (age < 18) {
        cout << "You are NOT eligible to vote. You must be at least 18 years old." << endl;
    }
    else {
        cout << "You are NOT eligible to vote. You must be a citizen." << endl;
    }

    return 0;
}