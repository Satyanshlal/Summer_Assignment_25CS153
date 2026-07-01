//Write a program to Create menu-driven calculator.

#include <iostream>
using namespace std;

int main()
{
    int n;
    float n1, n2;

    cout << "++++|| MENU DRIVEN CALCULATOR ||++++" << endl;
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;
    cout << "Enter your choice (1-4): ";
    cin >> n;

    cout << "Enter first number: ";
    cin >> n1;
    cout << "Enter second number: ";
    cin >> n2;

    switch (n)
    {
        case 1:
            cout << "Addition = " << n1 + n2;
            break;

        case 2:
            cout << "Subtraction = " << n1 - n2;
            break;

        case 3:
            cout << "Multiplication = " << n1 * n2;
            break;

        case 4:
            if (n2 != 0)
                cout << "Division = " << n1 / n2;
            else
                cout << "Division by zero is not possible.";
            break;

        default:
            cout << "Invalid choice!";
    }

    return 0;
}