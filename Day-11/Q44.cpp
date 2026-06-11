//Write a program to Write function to find factorial.

#include <iostream>
using namespace std;

int fact(int n)

{

    int a = 1;
    
    while (n > 0)
    {

        a = a * n;

        n--;

    }

    return a;
}

int main ()
{

    int n; 

    cout << "Enter any number: ";
    cin >> n;

    int factorial = fact(n);


    cout << "Factorial of " << n << " = " << factorial;

    return 0;
}