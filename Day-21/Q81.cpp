//Write a program to Find string length without strlen().


#include <iostream>
#include <string>
using namespace std;

int main()
{
 string str;
 int length = 0;

 cout << "Enter the string: ";
 cin >> str;

 while(str[length] != '\0')
 {
    length++;
 }

 cout << "String length is: " << length;

 return 0;
}
