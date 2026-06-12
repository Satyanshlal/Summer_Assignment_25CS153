//Write a program to Write function for palindrome.

#include <iostream>
using namespace std;

int pallindrome(int n)

{

    int a = n;
    int b = 0;

    while (n> 0)
    {

        int c = n % 10;
        b = 10 * b + c;
        n = n / 10;
    }


    if (a == b)

    {
        cout << "The number is palindrome.";

    }

    else{

        cout << "The number is not palindrome.";
    }


}

int main ()

{
    int n;

    cout << "Enter any number: ";
    cin >> n;
    pallindrome(n);

    return 0;
}