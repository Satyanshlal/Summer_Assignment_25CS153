//Write a program to Create menu-driven string operations system.

#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

int main()
{
    char str[100];
    int n, i, len;

    cout << "Enter a string: ";
    cin.getline(str, 100);

    do
    {
        cout << "\n----- String Operations Menu -----\n";
        cout << "1. Display String\n";
        cout << "2. Find Length\n";
        cout << "3. Reverse String\n";
        cout << "4. Convert to Uppercase\n";
        cout << "5. Convert to Lowercase\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> n;

        len = strlen(str);

        switch (n)
        {
        case 1:
            cout << "String = " << str << endl;
            break;

        case 2:
            cout << "Length = " << len << endl;
            break;

        case 3:
            cout << "Reversed String = ";
            for (i = len - 1; i >= 0; i--)
            {
                cout << str[i];
            }
            cout << endl;
            break;

        case 4:
            cout << "Uppercase = ";
            for (i = 0; i < len; i++)
            {
                cout << (char)toupper(str[i]);
            }
            cout << endl;
            break;

        case 5:
            cout << "Lowercase = ";
            for (i = 0; i < len; i++)
            {
                cout << (char)tolower(str[i]);
            }
            cout << endl;
            break;

        case 6:
            cout << "Program Ended." << endl;
            break;

        default:
            cout << "Invalid Choice!" << endl;
        }

    } while (n != 6);

    return 0;
}