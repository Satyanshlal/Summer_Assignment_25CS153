//Write a program to Find first non-repeating character.

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;

    cout << "Enter string: ";
    getline(cin, str);

    int len = str.length(),  a = 0;
    

    
    int mp[256] = {0};

    for (int i  = 0; i < len; i++)
    {
    mp[str[i]]++;
    }

    for(int i = 0; i < len; i++)
    {
        if(mp[str[i]] == 1)
        {
            cout << "First non-repeating charcter is: " << str[i];
            a = 1;
            break;
        }
    }
    if (a == 0)
    {
        cout << "no non-repeating character";
    }

    return 0;
}