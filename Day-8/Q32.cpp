//Write a program to Print repeated-number pattern.

#include <iostream>
using namespace std;

int main () 
{
    int i, j, n;
    
    printf("Enter number of rows: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
        cout << i;
        }
        cout << endl;
    }
     return 0;
}