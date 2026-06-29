//Write a program to Create ticket booking system.

#include <iostream>
using namespace std;

int main()
{
    string name[10];
    long long phone[10];
    int n = 0;
    int choice;

    while (choice != 3)
    {
        cout << "\n===== Contact Management System =====\n";
        cout << "1. Add Contact\n";
        cout << "2. Display Contacts\n";
        cout << "3. Exit\n";
        cout << "Enter Choice: ";
        cin >> choice;

        if (choice == 1)
        {
            cout << "Enter Name: ";
            cin >> name[n];

            cout << "Enter Phone Number: ";
            cin >> phone[n];

            n++;

            cout << "Contact Added Successfully.\n";
        }
        else if (choice == 2)
        {
            if (n == 0)
            {
                cout << "No Contacts Found.\n";
            }
            else
            {
                cout << "\nContact List\n";

                for (int i = 0; i < n; i++)
                {
                    cout << "Name: " << name[i] << endl;
                    cout << "Phone: " << phone[i] << endl;
                    cout << endl;
                }
            }
        }
        else if (choice == 3)
        {
            cout << "Thank You!\n";
        }
        else
        {
            cout << "Invalid Choice.\n";
        }
    }

    return 0;
}