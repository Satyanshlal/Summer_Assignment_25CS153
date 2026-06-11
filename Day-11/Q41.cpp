//Write a program to Write function to find sum of two numbers.

#include <iostream>
using namespace std;


    int sum(int n1, int n2)
    {

        return n1 + n2;
    }

    int main ()

    {
        int n1, n2;

        cout << "Enter 1st number: ";
        cin >> n1;

        cout << "Enter 2nd number: ";
        cin >> n2;


        cout << "Sum = " << sum(n1, n2);

    
    }
