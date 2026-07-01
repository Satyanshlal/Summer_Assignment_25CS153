//Write a program to Develop complete mini project using arrays, strings and functions.

#include <iostream>
#include <string>

using namespace std;

void addItem(string item[], int id[], int &count)
{
    if (count < 3)
    {
        cout << "Enter Item ID: ";
        cin >> id[count];

        cout << "Enter Item Name: ";
        cin >> item[count];

        count++;

        cout << "Item Added Successfully!\n";
    }
    else
    {
        cout << "Inventory Full!\n";
    }
}

void displayItem(string item[], int id[], int count)
{
    if (count == 0)
    {
        cout << "No Items Available!\n";
    }
    else
    {
        cout << "\n----- Inventory Items -----\n";

        for (int i = 0; i < count; i++)
        {
            cout << "Item ID : " << id[i] << endl;
            cout << "Item Name : " << item[i] << endl;
            cout << endl;
        }
    }
}

int main()
{
    string item[3];
    int id[3];
    int count = 0;
    int choice;

    while (1)
    {
        cout << "\n1. Add Item";
        cout << "\n2. Display Items";
        cout << "\n3. Exit";
        cout << "\nEnter Choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            addItem(item, id, count);
            break;

        case 2:
            displayItem(item, id, count);
            break;

        case 3:
            cout << "Program Ended.";
            return 0;

        default:
            cout << "Invalid Choice!";
        }
    }

    return 0;
}