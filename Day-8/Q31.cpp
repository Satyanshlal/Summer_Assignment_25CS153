//Write a program to Print character triangle.


#include <iostream>
using namespace std;


int main ()
{
    int i, j, n;

    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout << char(64 + j);
        }
        cout << endl;
    }
    return 0;
}


