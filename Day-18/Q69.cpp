//Write a program to Bubble sort.

#include <iostream>
using namespace std;

int main ()
{
    int n, i, j , a;
    cout << "Enter the size of array: ";
    cin >> n;

    int arr[n];

    cout << "Enter elements of the array: ";
    for ( i = 0 ; i < n; i ++)
    {
        cin >> arr[i];

    }


    for( i = 0; i < n - 1; i++)
    {
        for(j = 0; j < n - i - 1 ; j++)
        {
            if ( arr[j] > arr[j + 1])
            {
                a = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = a;
            }
        }
    }
    
    cout << "Sorted array: ";
    for(i = 0; i < n; i++)
    {
        cout << arr[i] << " ";

    }
    return 0;
}
