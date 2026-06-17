//Write a program to Find common elements.

#include <iostream>
using namespace std;

int main()
{
    int n1, n2, i , j ;

    cout << "Enter size of 1st array: ";
    cin >> n1;
    int arr1[n1];

    cout << "Enter elements of 1st array: ";
    for(i = 0; i < n1 ; i++)
    {
        cin >> arr1[i];

    }

    cout << "Enter the size of 2nd array: ";
    cin >> n2;

    int arr2[n2];

    cout << "Enter elements of 2nd array: ";
    for (i = 0; i < n2; i++)
    {
        cin >> arr2[i];
    }

    cout << "Common elements in two arrays: ";

    for (i = 0; i < n1; i++)
    {
        for (j = 0; j < n2; j++)
        {
            if (arr1[i] == arr2[j])
            {
                cout << arr1[i] << " , ";
                break;
            }
        }
    }
    return 0;
}