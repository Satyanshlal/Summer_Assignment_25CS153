//Write a program to Write function to find maximum.

#include <iostream>
using namespace std;


int max(int n1, int n2)

{

    if (n1 > n2)
    return n1;
    

    else 
return n2;
}


int main ()

{
    int a, b;
   

    cout << "Enter 1st number: ";
    cin >> a;

    cout << "Enter 2nd number: ";
    cin >> b;

    cout << "Maximum = " << max(a, b);

  return 0;
}