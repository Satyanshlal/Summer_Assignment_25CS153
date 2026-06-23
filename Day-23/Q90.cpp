//Write a program to Find first repeating character.

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;

    cout << "Enter string: ";
    getline(cin, str);

    int a[256] = {0};

    for (int i = 0; i < str.length(); i++)
    {
        a[str[i]]++;
        if(a[str[i]] == 2)
        {
            cout << "First repeating charcter is: " << str[i];
           return 0;
        }
    }

    cout << "No repeating character found.";

    return 0;

}