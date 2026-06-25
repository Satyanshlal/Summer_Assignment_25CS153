//Write a program to Find common characters in strings.

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str, gtr, mtr;
    int v = 0;

    cout << "Enter first string: ";
    getline(cin, str);

    cout << "Enter second string: ";
    getline(cin, gtr);

   
    for (int i = 0; i < str.length(); i++)
    {
        for (int j = 0; j < gtr.length(); j++)
        {
            if (str[i] == gtr[j])
            {
                mtr += gtr[j];   
                v++;
            }
        }
    }

    
    for (int i = 0; i < v; i++)
    {
        for (int j = i + 1; j < v; j++)
        {
            if (mtr[i] > mtr[j])
            {
                char c = mtr[j];
                mtr[j] = mtr[i];
                mtr[i] = c;
            }
        }
    }

   
    cout << "Common characters in these 2 strings:" << endl;
    for (int i = 0; i < v; i++)
    {
        
        if (i > 0 && mtr[i] == mtr[i - 1])
            continue;

        cout << mtr[i] << endl;
    }

    return 0;
}