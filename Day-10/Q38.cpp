//Write a program to Print reverse pyramid.


#include <iostream>
using namespace std;


int main ()
{

    int rows = 5, i, j, k;

    for(i = rows; i >= 1; i--)

    {
        // Print space

        for(j = 1; j <= rows - i; j++)

        {

            cout << " ";
        }

        // Print stars

        for(k = 1; k <= (2 * i - 1); k++)
        {

            cout << "*";
        }

        cout << endl;
    }

    return 0;
}