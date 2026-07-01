//Write a program to Create student record system using arrays and strings.

#include <iostream>
#include <string>

using namespace std;

int main()
{
    int reg[100], cla[100];
    string name[100];
    int n = 0;
    int choice;

    do
    {
        cout << "\n----- Student Record System -----\n";
        cout << "1. Add Student\n";
        cout << "2. Display Students\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1)
        {
            cout << "Enter Registration Number: ";
            cin >> reg[n];

            cout << "Enter Name: ";
            cin >> name[n];

            cout << "Enter Class: ";
            cin >> cla[n];

            n++;

            cout << "Record Added Successfully.\n";
        }
        else if (choice == 2)
        {
            if (n == 0)
            {
                cout << "No Records Found.\n";
            }
            else
            {
                cout << "\nReg No\tName\tClass\n";

                for (int i = 0; i < n; i++)
                {
                    cout << reg[i] << "\t"
                         << name[i] << "\t"
                         << cla[i] << endl;
                }
            }
        }
        else if (choice == 3)
        {
            cout << "Program Ended.\n";
        }
        else
        {
            cout << "Invalid Choice.\n";
        }

    } while (choice != 3);

    return 0;
}