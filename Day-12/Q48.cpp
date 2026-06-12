//Write a program to Write function for perfect number.

#include <iostream>
using namespace std;

int perfect(int n)
{
    int sum = 0;

    for (int i = 1; i < n; i++)
    {

        if (n % i == 0)

        sum = sum + i;
    }

    return sum == n;
}

int main ()

{

    int n;

    cout << "Enter any number: ";
    cin >> n;

    if (perfect(n))

    cout << n << " is a Perfect Number.";

    else

    cout << n << " is not a Perfect Number.";

    return 0;


}