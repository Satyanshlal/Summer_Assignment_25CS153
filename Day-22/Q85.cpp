//Write a program to Check palindrome string.

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    string rev = "";

    cout << "Enter a string: ";
    cin >> str;

    for (int i = str.length() - 1; i >= 0; i--)
    {
        rev = rev + str[i];
    }

    if (str == rev)
    {
        cout << "Palindrome string";

    }
    else
    {
        cout << "Not a Palindrome string";
    }

    return 0;
}