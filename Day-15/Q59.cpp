//Write a program to Rotate array right.

#include <iostream>
using namespace std;

int main ()
{

    int n, i, a;

    cout << "Enter numbers of elements: ";
    cin >> n;

    int arr[n];

    cout << "Eneter elements: ";

    for (i = 0; i < n; i++)
    {

        cin >> arr[i];
    }

    cout << "Enter number of rotations: ";
    cin >> a;

    a = a % n;

    while (a--)
    {
        int right = arr[n - 1];

        for (i = n - 1; i > 0; i--)
        {
            arr[i] = arr[i - 1];

        }
        arr[0] = right;
    }

    cout << "Array after rotation: ";
    for (i = 0; i < n; i++)
    {
        cout << arr[i] << " ";

    }

    return 0;
}