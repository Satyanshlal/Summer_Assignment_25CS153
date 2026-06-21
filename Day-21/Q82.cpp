//Write a program to Reverse a string.

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    int n;

    cout << "Enter the string: ";
    cin >> str;

    n = str.length();

    for(int i = 0; i < n / 2; i++)
    {
        char temp = str[i];
        str[i] = str[n - 1 - i];
        str[n - 1 - i] = temp;
    }

    cout << "Reverse string: " << str;

    return 0;
}