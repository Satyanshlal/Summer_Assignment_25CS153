//Write a program to Find diagonal sum.

#include <iostream>
using namespace std;

int main()
{
    int row, column, arr[100][100], sum = 0, x = 0;
    cout << "Enter no. of rows in matrix: ";
    cin >> row;

    cout << "Enter no. column in matrix: ";
    cin >> column;

    if (row != column)
    {
        cout << "Can't add diagonal";
    }
    else
    {
        cout << "Enter elements of matrix: ";
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < column; j++)
            {
                
                cin >> arr[i][j];
            }
        }   
        for (int i = 0; i < row; i++)
        {
            sum += arr[i][i];
            x += arr[i][row - 1 -i];
        }
        cout << "sum of left diagonal: " << sum << endl;
        cout << "sum of right diagonal: " << x << endl;
    }

    return 0;
}