//Write a program to Create ticket booking system.

#include <iostream>
using namespace std;

int main()
{
    int totalSeats = 100;
    int choice, seats;

    while (1)
    {
        cout << "\n------ TICKET BOOKING SYSTEM ------\n";
        cout << "1. BOOK TICKET\n";
        cout << "2. CHECK AVAILABLE SEATS\n";
        cout << "3. EXIT\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter Number of Seats to Book: ";
            cin >> seats;

            if (seats <= totalSeats)
            {
                totalSeats = totalSeats - seats;
                cout << "Ticket Booked Successfully.\n";
            }
            else
            {
                cout << "Sorry! Only " << totalSeats << " seats are available.\n";
            }
            break;

        case 2:
            cout << "Available Seats: " << totalSeats << endl;
            break;

        case 3:
            cout << "Thank You!\n";
            return 0;

        default:
            cout << "Invalid Choice.\n";
        }
    }

    return 0;
}