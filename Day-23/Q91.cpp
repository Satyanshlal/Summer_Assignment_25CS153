//Write a program to Check anagram strings.

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main ()
{
    string str1, str2;

    cout << "Enter 1st string: ";
    cin >> str1;

    cout << "Enter 2nd string: ";
    cin >> str2;


    if (str1.length() != str2.length())
    {
        cout << "String are not anagrams.";
        return 0;
    }

    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());

    if(str1 == str2)
    {
        cout << "Strings are anagrams.";
    }
    else{
        cout << "String are not anagrams.";
    }

    return 0;
}