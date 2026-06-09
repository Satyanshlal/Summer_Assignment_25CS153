//Write a program to Print repeated character pattern.


#include <iostream>
using namespace std;

int main () 

{

    int n, i, j;

    cout << "Enter number of rows: ";
    cin >> n;


    for (i = 1; i <= n; i++)

    {
        for (j = 1; j <= i; j++)

        {
            cout << char('A'  + i - 1);
        }

        cout << endl;
    }

    return 0;

}