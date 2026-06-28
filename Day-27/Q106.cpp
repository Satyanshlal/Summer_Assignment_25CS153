//Write a program to Create employee management system.

#include <iostream>
#include <string>

using namespace std;

struct Employee
{
    int id;
    string name;
    float salary;
};

int main()
{
    Employee emp[100];
    int n = 0;
    int choice;

    do
    {
        cout << "\n-----Employee Management System-----\n";
        cout << "1. Add Employee\n";
        cout << "2. Display Employees\n";
        cout << "3. Search Employee\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "\nEnter Employee ID: ";
            cin >> emp[n].id;

            cin.ignore();

            cout << "Enter Employee Name: ";
            getline(cin, emp[n].name);

            cout << "Enter Salary: ";
            cin >> emp[n].salary;

            n++;

            cout << "Employee Added Successfully!\n";
            break;

        case 2:
            if (n == 0)
            {
                cout << "\nNo Employee Records Found!\n";
            }
            else
            {
                cout << "\nEmployee Records:\n";

                for (int i = 0; i < n; i++)
                {
                    cout << "\nEmployee " << i + 1 << endl;
                    cout << "ID     : " << emp[i].id << endl;
                    cout << "Name   : " << emp[i].name << endl;
                    cout << "Salary : " << emp[i].salary << endl;
                }
            }
            break;

        case 3:
        {
            int id;
            bool found = false;

            cout << "\nEnter Employee ID to Search: ";
            cin >> id;

            for (int i = 0; i < n; i++)
            {
                if (emp[i].id == id)
                {
                    cout << "\nEmployee Found!\n";
                    cout << "ID     : " << emp[i].id << endl;
                    cout << "Name   : " << emp[i].name << endl;
                    cout << "Salary : " << emp[i].salary << endl;

                    found = true;
                    break;
                }
            }

            if (!found)
            {
                cout << "Employee Not Found!\n";
            }

            break;
        }

        case 4:
            cout << "\nExiting Program...\n";
            break;

        default:
            cout << "\nInvalid Choice!\n";
        }

    } while (choice != 4);

    return 0;
}