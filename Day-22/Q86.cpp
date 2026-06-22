//Write a program to Count words in a sentence.

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    int count = 1;

    cout << "Enter a sentence: ";
    getline(cin, str);

    for(int i = 0; i < str.length(); i++)
    {
        if (str[i] == ' ')
        count++;
    }

    cout << "Total number of words: " << count;
    return 0;
}
