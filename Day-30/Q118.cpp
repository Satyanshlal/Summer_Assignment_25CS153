//Write a program to Create mini library system.

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string book[100];
    int count = 0;
    int n;
    string searchBook;
    bool found;

    while (1)
    {
        cout << "\n|| Mini Library System ||\n";
        cout << "1. Add Book\n";
        cout << "2. Display Books\n";
        cout << "3. Search Book\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> n;

        switch (n)
        {
        case 1:
            cout << "Enter Book Name: ";
            cin >> book[count];

            count++;
            cout << "Book Added Successfully!\n";
            break;

        case 2:
            if (count == 0)
            {
                cout << "No Books Available!\n";
            }
            else
            {
                cout << "\nBooks in Library:\n";
                for (int i = 0; i < count; i++)
                {
                    cout << i + 1 << ". " << book[i] << endl;
                }
            }
            break;

        case 3:
            if (count == 0)
            {
                cout << "No Books Available!\n";
            }
            else
            {
                cout << "Enter Book Name to Search: ";
                cin >> searchBook;

                found = false;

                for (int i = 0; i < count; i++)
                {
                    if (book[i] == searchBook)
                    {
                        cout << "Book Found!\n";
                        found = true;
                        break;
                    }
                }

                if (found == false)
                {
                    cout << "Book Not Found!\n";
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