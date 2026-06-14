//Write a program to Find duplicates in array.

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n, i;
   
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];

    cout << "Enter elements of the array: ";

    for (i = 0; i < n; i++)
    {
        cin >> arr[i];

    }

    sort(arr, arr + n);

    cout << "Duplicate elements are: ";

    for (i = 0; i < n - 1; i++)
    {
        if(arr[i] == arr[i + 1])
        {
            cout << arr[i] << " ";
        }
    }

    return 0;

}