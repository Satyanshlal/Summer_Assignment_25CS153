//Write a program to Merge two sorted arrays.

#include <iostream>
using namespace std;

int main()
{
    int arr1[100], arr2[100], merged[200];
    int n1, n2, i = 0, j = 0, k = 0;

    cout << "Enter the size of 1st array: ";
    cin >> n1;

     cout << "Enter sorted elements: ";
     for (int i = 0; i < n1; i ++)
     {
        cin >> arr1[i];
     }

     cout << "Enter the size of 2nd array: ";
     cin >> n2;

     cout << "Enter sorted elements: ";
     for (int i = 0; i < n2; i++)
     {
        cin >> arr2[i];
     }

      while (i < n1 && j < n2)
    {
        if (arr1[i] <= arr2[j])
        {
            merged[k] = arr1[i];
            i++;
        }
        else
        {
            merged[k] = arr2[j];
            j++;
        }
        k++;
    }

   
    while (i < n1)
    {
        merged[k] = arr1[i];
        i++;
        k++;
    }

    
    while (j < n2)
    {
        merged[k] = arr2[j];
        j++;
        k++;
    }

    cout << "Merged Array: ";
    for (int x = 0; x < n1 + n2; x++)
    {
        cout << merged[x] << " ";
    }

    return 0;
}
