//Write a program to Write function for Armstrong.


#include <iostream>
#include <cmath>
using namespace std;

int armstrong(int num)
{
    int temp = num, sum = 0, digits =0;

    int n = num;

    while (n > 0)
    {
        digits ++ ;
        n /= 10;
    }

    while (temp > 0)
    {
        int digit = temp % 10;

        sum = sum + pow(digit, digits);
        temp = temp / 10;

    }

    return sum;

}


int main ()

{

    int num;  

    cout << "Enter a number: ";
    cin >> num;


    if (armstrong(num) == num)

    cout << "Armstrong number";

    else

    cout << "Not Armstrong number";

    return 0;
}