//Write a program to Convert lowercase to uppercase.

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;

    cout << "Enter the string: ";
    cin >> str;

    for (char &ch : str)
    {
        if (ch >= 'a' && ch <= 'z')
        {
            ch = ch - 32;
        }
    }

    cout << "Uppercase string: " << str << endl;

    return 0;
}