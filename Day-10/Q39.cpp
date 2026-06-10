//Write a program to Print number pyramid.


#include <iostream>
using namespace std;

int main () 

{

    int n, i, j, k;

     cout << "Enter the number of rows: ";
     cin >> n;


     for (i = 1; i <= n; i++)

     {

        for (j = 1; j <= n - i; j++)

        {
            
            cout << " " ;

        }
        
        for (j = 1; j <= i; j++)
        {

            cout << j;
        }
        
        for(j = i - 1; j >= 1; j--)
        {

            cout << j;
        }

        cout << endl;
     }

     return 0;
}