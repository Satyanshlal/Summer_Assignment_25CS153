//Write a program to Print character pyramid.
      

#include <iostream>
using namespace std;

int main ()
{

    int n, i, j, k;
    char ch;

    cout << "Enter any number: ";
    cin >> n;

    for(i = 1; i <= n; i++)

    {

        //print space
        for ( j = 1; j <= n - i; j++)

        {

            cout << " ";
        }

        // Print character increasing

    for (ch = 'A'; ch < 'A' + i; ch++)
    {
        cout << ch;
    }

    // Print characters in decreasing
    for ( ch = 'A' + i -2; ch >= 'A'; ch --)
    {
        
        cout << ch;
    }

    cout << endl;
    }

    return 0;
}