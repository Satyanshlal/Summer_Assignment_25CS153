//Write a program to Second largest element.

#include <iostream>
#include <algorithm>
using namespace std;

int main ()
{
    int n, i;

    cout << "Enter the size of array: ";
    cin >> n;

    int arr[n];

    cout << "Enter Elements: ";

    for(i = 0; i < n; i++)
    {

        cin >> arr[i];

    }

    sort(arr, arr + n);

    cout << "Second Largest Element is = " << arr[n - 2];

    return 0;
}

