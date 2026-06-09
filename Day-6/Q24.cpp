//Write a program to Find x^n without pow().

#include <iostream>
using namespace std;


int main () 
{

    int x, n;
    long long result = 1;

    cout << "Enter base and power: ";
    cin >> x >> n;


    while (n > 0)

    {
        result = result * x;
        n--;
    }


    cout << "Result = " << result;

    return 0;
}