//Write a program to Find column-wise sum.

#include <iostream>
using namespace std;

int main()
{

    int r, c, a[100][100];

    cout << "Enter number of rows: ";
    cin >> r;

    cout << "Enter number of column: ";
    cin >> c;

    cout << "Enter elements of matrix: ";
    for (int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
    {
        cin >> a[i][j];
    }
    }

    for (int j = 0; j < c; j++)
    {
        int sum = 0;
        for(int i = 0; i < r; i++)
        {
            sum = sum + a[i][j];
        }
        cout << "Sum of column " << j + 1 << " = " << sum << endl;
    }
    return 0;
}