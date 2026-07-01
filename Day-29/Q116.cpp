//Write a program to Create inventory management system.

#include <iostream>

using namespace std;

int main()
{
    int id[100], quantity[100];
    float price[100];
    int count = 0;
    int choice, searchId, i, found;

    while (1)
    {
        cout << "\n----- Inventory Management System -----\n";
        cout << "1. Add Product\n";
        cout << "2. Display Products\n";
        cout << "3. Search Product\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter Product ID: ";
            cin >> id[count];

            cout << "Enter Quantity: ";
            cin >> quantity[count];

            cout << "Enter Price: ";
            cin >> price[count];

            count++;
            cout << "Product Added Successfully!\n";
            break;

        case 2:
            if (count == 0)
            {
                cout << "No Products Available!\n";
            }
            else
            {
                cout << "\nID\tQuantity\tPrice\n";
                for (i = 0; i < count; i++)
                {
                    cout << id[i] << "\t"
                         << quantity[i] << "\t\t"
                         << price[i] << endl;
                }
            }
            break;

        case 3:
            if (count == 0)
            {
                cout << "No Products Available!\n";
            }
            else
            {
                cout << "Enter Product ID to Search: ";
                cin >> searchId;

                found = 0;

                for (i = 0; i < count; i++)
                {
                    if (id[i] == searchId)
                    {
                        cout << "\nProduct Found!\n";
                        cout << "ID: " << id[i] << endl;
                        cout << "Quantity: " << quantity[i] << endl;
                        cout << "Price: " << price[i] << endl;
                        found = 1;
                        break;
                    }
                }

                if (found == 0)
                {
                    cout << "Product Not Found!\n";
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