//Write a program to Write function to check prime.

#include <iostream>
using namespace std;

int prime(int n, int a)

{

    for (int i = 2; i < n; i++)

    {

        if (n % i == 0)
        {

            a++;
        }
    }

    if (a > 0)

    cout << "The number is not prime ";

    else

    cout << "The number is prime ";
}

int main ()
{

    int n;

    cout << "Enter any number: ";
    cin >> n;

    int a = 0;
    int Prime = prime(n, a);

    return 0;


}