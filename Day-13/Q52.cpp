//Write a program to Count even and odd elements.

#include <iostream>
using namespace std;

int countEvenOdd(int arr[], int n)
{

    int even = 0, odd = 0;
    
    for(int i = 0; i < n; i++)
    {
        if(arr[i] % 2 == 0)

        even++;

        else

        odd++;
    }

    cout << "Number of Even elements: " << even << endl;
    cout << "Number of Odd elements: " << odd << endl;
}


int main ()
{

    int n;

    cout << "Enter size of array: ";
    cin >> n;


    int arr[n];

    cout << "Enter elements: " << endl;
    
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    countEvenOdd(arr, n);

    return 0;
}