//Write a program to Move zeroes to end.

#include <iostream>
using namespace std;

int main()
{

    int n, i, j = 0;

    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];

    cout << "Enter elements: ";

    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for(i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            swap(arr[i], arr[j]);
            j++;
        }
    }

    cout << "Array after moving zeroes to end: ";
    for (i = 0; i < n; i ++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}