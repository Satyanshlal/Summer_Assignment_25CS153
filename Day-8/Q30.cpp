// Write a program to Print number triangle.



#include <iostream>
using namespace std;

int main ()
{
    int n;  // n = number of rows

    cout << "Enter the number of rows: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;

}