//Write a program to Print factors of a number.

#include <iostream>
using namespace std;

int main() 
{
    int n, i = 1;
    
    cout << "Enter a Number:";
    cin >> n;

    cout << "Factors are: ";

    while (i <= n){
    
        if (n % i == 0){
        
            cout << i << " ";
        }

        i++;
    }

    return 0;

}
