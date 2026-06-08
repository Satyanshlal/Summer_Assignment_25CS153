//Write a program to Find largest prime factor.

#include <iostream>
using namespace std;

int main ()

{

    int n, i = 2, prime = -1;

    cout << "Enter any number: ";
    cin >> n;
    
    
    for (int i =2; i <= n; i++)
    {
        if (n % i ==0)
        {
            bool isprime= true;
            for(int j = 2; j < i; j++)
            {
                if (i % j == 0)
                {
                isprime = false;
                break;
                }
            }
           if (isprime)
            prime = i;
        }
    }
    cout << "LArgest Prime factor : " << prime;
    return 0;
    }
