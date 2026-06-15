//Write a program to Rotate array left.

#include <iostream>
using namespace std;

int main ()
{
    int n, a, i;

    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];

    cout << "Enter elements: ";

    for (i = 0; i < n; i++)
    {
        cin >> arr[i];

    }

    cout << "Enter number of rotations: ";
    cin >> a;

    a = a % n;

    while (a--)
    {
        int left = arr[0];

        for(i = 0; i < n - 1; i++)
        {
            arr[i] = arr[i + 1];
        }

        arr[n - 1] = left;
    }

    cout << "Array after rotation: ";
    for(i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}