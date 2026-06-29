//Write a program to Create bank account system.

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name;
    float balance = 0, amount;
    int choice;

    cout << "Enter Account Holder Name: ";
    getline(cin, name);

    while (1)
    {
        cout << "\n------ BANK ACCOUNT SYSTEM -------\n";
        cout << "1. DEPOSITE MONEY\n";
        cout << "2. WITHDRAW MONEY\n";
        cout << "3. CHECK BALANCE\n";
        cout << "4. EXIT\n";
        cout << "ENTER CHOICE: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter Amount to Deposit: ";
            cin >> amount;
            balance = balance + amount;
            cout << "Money Deposited Successfully.\n";
            break;

        case 2:
            cout << "Enter Amount to Withdraw: ";
            cin >> amount;

            if (amount <= balance)
            {
                balance = balance - amount;
                cout << "Money Withdrawn Successfully.\n";
            }
            else
            {
                cout << "Insufficient Balance.\n";
            }
            break;

        case 3:
            cout << "Account Holder: " << name << endl;
            cout << "Current Balance: " << balance << endl;
            break;

        case 4:
            cout << "Thank You!\n";
            return 0;

        default:
            cout << "Invalid Choice.\n";
        }
    }

    return 0;
}