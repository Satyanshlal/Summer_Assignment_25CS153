//Write a program to Frequency of an element.

#include <iostream>
using namespace std;

int main()
{

    int n, a, b, i, j, k;

    cout << "Enter the limit: ";
    cin >> n;

    int arr[n];

    for (i = 0; i < n; i++)
    {

        cout << "Value of " << i + 1 << " = ";
        cin >> arr[i];
    }

    for (j = 0; j < n; j++)
    {
     b = 0;

     for (k = 0; k < n; k++)
     {
        if (arr[j] == arr[k])
        b++;
     }

     cout << "Frequency of " << arr[b] << " = " << b << endl;
    }

    return 0;
}