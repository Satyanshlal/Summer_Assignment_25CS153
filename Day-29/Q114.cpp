//Write a program to Create menu-driven array operations system.

#include <iostream>
using namespace std;

#define MAX 100

int main()
{
    int arr[MAX];
    int size = 0;
    int choice, element;
    int i, found;

    while (true)
    {
        cout << "\n=====|| MENU DRIVEN ARRAY OPERATIONS ||=====\n";
        cout << "1. Insert Element\n";
        cout << "2. Delete Element\n";
        cout << "3. Display Array\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                if (size == MAX)
                {
                    cout << "Array is full!" << endl;
                }
                else
                {
                    cout << "Enter element: ";
                    cin >> element;

                    arr[size] = element;
                    size++;

                    cout << "Element inserted successfully." << endl;
                }
                break;

            case 2:
                if (size == 0)
                {
                    cout << "Array is empty!" << endl;
                }
                else
                {
                    cout << "Enter element to delete: ";
                    cin >> element;

                    found = -1;

                    for (i = 0; i < size; i++)
                    {
                        if (arr[i] == element)
                        {
                            found = i;
                            break;
                        }
                    }

                    if (found == -1)
                    {
                        cout << "Element not found." << endl;
                    }
                    else
                    {
                        for (i = found; i < size - 1; i++)
                        {
                            arr[i] = arr[i + 1];
                        }

                        size--;
                        cout << "Element deleted successfully." << endl;
                    }
                }
                break;

            case 3:
                if (size == 0)
                {
                    cout << "Array is empty." << endl;
                }
                else
                {
                    cout << "Array Elements: ";

                    for (i = 0; i < size; i++)
                    {
                        cout << arr[i] << " ";
                    }

                    cout << endl;
                }
                break;

            case 4:
                cout << "Exiting Program..." << endl;
                return 0;

            default:
                cout << "Invalid choice!" << endl;
        }
    }

    return 0;
}