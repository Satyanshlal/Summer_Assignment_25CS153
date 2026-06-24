//Write a program to Compress a string.

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str;

    cout << "Enter the string: ";
    getline(cin, str);

    for (int i = 0; i < str.length();)
    {
        int count = 1;

        while (i + count < str.length() && str[i] == str[i + count])
        {
            count++;
        }

        cout << str[i] << count;

        i += count;
    }

    return 0;
}