//Write a program to Create library management system.


#include <iostream>
using namespace std;

int main()
{
    string book[10];
    int n = 0;
    int choice;
    string name;
    int i;

    while (1)
    {
        cout << "\n++++++ Library Management System ++++++\n";
        cout << "1. Add Book\n";
        cout << "2. Display Books\n";
        cout << "3. Search Book\n";
        cout << "4. Exit\n";
        cout << "Enter Choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter Book Name: ";
            cin.ignore();
            getline(cin, book[n]);
            n++;
            cout << "Book Added Successfully.\n";
            break;

        case 2:
            if (n == 0)
            {
                cout << "No Books Available.\n";
            }
            else
            {
                cout << "\nBooks in Library:\n";
                for (i = 0; i < n; i++)
                {
                    cout << i + 1 << ". " << book[i] << endl;
                }
            }
            break;

        case 3:
            cout << "Enter Book Name to Search: ";
            cin.ignore();
            getline(cin, name);

            for (i = 0; i < n; i++)
            {
                if (book[i] == name)
                {
                    cout << "Book Found.\n";
                    break;
                }
            }

            if (i == n)
            {
                cout << "Book Not Found.\n";
            }

            break;

        case 4:
            cout << "Thank You!\n";
            return 0;

        default:
            cout << "Wrong Choice.\n";
        }
    }

    return 0;
}