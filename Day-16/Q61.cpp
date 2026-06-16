//Write a program to Find missing number in array.


#include <iostream>
using namespace std;


int main()
{
    int n, i;

    cout << "Enter value of n terms: ";
    cin >> n;

    int arr[n - 1];

    cout << "Enter  " <<  n - 1 << " elements: ";
    for (i = 0; i < n - 1; i++)
    {
        cin >> arr[i];
    }

    int total = n * (n + 1) / 2;
    int sum = 0;

    for (i = 0; i < n - 1; i++)
    {
        sum = sum + arr[i];

    }

    int missing = total - sum;

    cout << "Missing number is: " << missing;

    return 0;
}