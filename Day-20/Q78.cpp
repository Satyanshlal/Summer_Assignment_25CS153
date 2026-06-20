//Write a program to Check symmetric matrix.

#include <iostream>
using namespace std;

int main ()
{
    int n, a[100][100], b[100][100];
    int count = 0;

    cout << "Enter size of Matrix: ";
    cin >> n;

    cout << "Enter elements of matrix:\n";
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cin >> a[i][j];
            b[j][i] = a[i][j];
        }
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(a[i][j] != b[i][j])
            {
                count++;
            }
        }
    }

    if(count == 0)
    {
        cout << "matrix is symmetric";
    }
    else
    {
        cout << "Matrix is not symmetric";
    }

    return 0;
}