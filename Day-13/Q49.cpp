//Write a program to Input and display array.

#include <iostream>
using namespace std;

int Array(int arr[], int n)

{

    cout << "Array elements are: ";

    for (int i = 0; i < n; i++)
    {

        cout << arr[i] << " ,";
    }
}

int main ()

{
    int n, i;

    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];

    cout << "Enter elements: " << endl;

    for (i = 0; i < n; i++)
    {

        cin >> arr[i];
    }

    Array(arr, n);

    return 0;
}