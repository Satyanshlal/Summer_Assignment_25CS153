//Write a program to Create mini employee management system.

#include <iostream>
#include <string>

using namespace std;

int main()
{
    int id[100], salary[100];
    string name[100];
    int count = 0;
    int n, searchId;
    bool found;

    while (1)
    {
        cout << "\n----- Employee Management System -----\n";
        cout << "1. Add Employee\n";
        cout << "2. Display Employees\n";
        cout << "3. Search Employee\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> n;

        switch (n)
        {
        case 1:
            cout << "Enter Employee ID: ";
            cin >> id[count];

            cout << "Enter Employee Name: ";
            cin >> name[count];

            cout << "Enter Salary: ";
            cin >> salary[count];

            count++;

            cout << "Employee Added Successfully!\n";
            break;

        case 2:
            if (count == 0)
            {
                cout << "No Employee Records Found!\n";
            }
            else
            {
                cout << "\nID\tName\tSalary\n";

                for (int i = 0; i < count; i++)
                {
                    cout << id[i] << "\t"
                         << name[i] << "\t"
                         << salary[i] << endl;
                }
            }
            break;

        case 3:
            if (count == 0)
            {
                cout << "No Employee Records Found!\n";
            }
            else
            {
                cout << "Enter Employee ID to Search: ";
                cin >> searchId;

                found = false;

                for (int i = 0; i < count; i++)
                {
                    if (id[i] == searchId)
                    {
                        cout << "\nEmployee Found!\n";
                        cout << "ID: " << id[i] << endl;
                        cout << "Name: " << name[i] << endl;
                        cout << "Salary: " << salary[i] << endl;

                        found = true;
                        break;
                    }
                }

                if (found == false)
                {
                    cout << "Employee Not Found!\n";
                }
            }
            break;

        case 4:
            cout << "Exiting Program...\n";
            return 0;

        default:
            cout << "Invalid Choice!\n";
        }
    }

    return 0;
}