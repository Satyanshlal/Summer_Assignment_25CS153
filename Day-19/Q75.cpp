//Write a program to Transpose matrix.

#include <iostream>
using namespace std;

int main()
{
    int r, c, a[100][100], b[100][100];

    cout << "Enter number of rows: ";
    cin >> r;

    cout << "Enter number of columns: ";
    cin >> c;

    // Input matrix
    cout << "\nEnter matrix elements:\n";
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> a[i][j];
        }
    }

    // Transpose matrix
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            b[j][i] = a[i][j];
        }
    }

    // Display original matrix
    cout << "\nOriginal Matrix:\n";
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    // Display transpose matrix
    cout << "\nTranspose Matrix:\n";
    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < r; j++)
        {
            cout << b[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}