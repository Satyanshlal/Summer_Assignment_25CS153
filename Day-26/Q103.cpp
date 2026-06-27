//Write a program to Create ATM simulation.

#include <iostream>
using namespace std;

int main() {
    int correctPin = 4356;    
    double balance = 10000.0;   
    int enteredPin;
    int choice;

    cout << "------ Welcome to the ATM ------" << endl;
    cout << "Enter your 4-digit PIN: ";
    cin >> enteredPin;

    
    if (enteredPin != correctPin) {
        cout << "Incorrect PIN. Exiting..." << endl;
        return 0;
    }

    cout << "PIN accepted. Welcome!" << endl;

    
    do {
        cout << "\n--------- ATM MENU ---------" << endl;
        cout << "1. Check Balance" << endl;
        cout << "2. Deposit Money" << endl;
        cout << "3. Withdraw Money" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            cout << "Your current balance is: $" << balance << endl;
        }
        else if (choice == 2) {
            double depositAmount;
            cout << "Enter amount to deposit: $";
            cin >> depositAmount;
            balance = balance + depositAmount;
            cout << "Deposit successful! New balance: $" << balance << endl;
        }
        else if (choice == 3) {
            double withdrawAmount;
            cout << "Enter amount to withdraw: $";
            cin >> withdrawAmount;

            if (withdrawAmount > balance) {
                cout << "Insufficient balance!" << endl;
            } else {
                balance = balance - withdrawAmount;
                cout << "Withdrawal successful! New balance: $" << balance << endl;
            }
        }
        else if (choice == 4) {
            cout << "Thank you for using the ATM. Goodbye!" << endl;
        }
        else {
            cout << "Invalid choice. Please try again." << endl;
        }

    } while (choice != 4);

    return 0;
}