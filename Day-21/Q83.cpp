//Write a program to Count vowels and consonants.

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str;
    int v = 0, c = 0;

    cout << "Enter the string: ";
    cin >> str;

    for(char ch : str)
    {
        ch = tolower(ch);
        if(isalpha(ch))
        {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
            v++;
            else{
                c++;
            }
        }
    }

    cout << "Number of vowels: " << v << endl;
    cout << "Number of consonants: " << c << endl;

    return 0;
}