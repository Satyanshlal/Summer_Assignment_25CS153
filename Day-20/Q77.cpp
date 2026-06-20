//Write a program to Multiply matrices.

#include <iostream>
using namespace std;

int main()
{
    int a[100][100], b[100][100], c[100][100];
    int i, j, k, r1, c1, r2, c2;

    cout << "Enter order of first matrix: ";
    cin >> r1 >> c1;

    cout << "Enter oder of second matrix: ";
    cin >> r2 >> c2;

    if (c1 == r2)
    {
        cout << "\nEnter elements of 1st Matrix:\n ";
        for(i = 0; i < r1; i++)
        {
            for(j = 0; j < c1; j++)
            {
                cin >> a[i][j];

            }
        }

        cout << "\nEnter elements of 2nd Matrix:\n";
        for(i = 0; i < r2; i++)
        {
            for(j = 0; j < c2; j++)
            {
                cin >> b[i][j];
            }
        }

        //Matrix Multiplication
        for(i = 0; i < r1; i++)
        {
            for(j = 0; j < c2; j++)
            {
              c[i][j] = 0;
              for(k = 0; k < c1; k++)
              {
                c[i][j] = c[i][j] + a[i][j] * b[i][j];
              }
            }
        }

        cout << "\nResultant Matrix:\n";
        for(i = 0; i < r1; i++)
        {
            for(j = 0; j < c2; j++)
            {
                cout << c[i][j] << "\t";
            }
            cout << endl;
        }
    }
    else
    {
        cout << "Matrix multiplication is not possible";
    }
    return 0;
}