//Write a program to Merge arrays.

#include <iostream>
#include <algorithm>
using namespace std;

int mergeArrays(int arr1[], int arr2[], int n1, int n2, int arr3[])

{
    int i = 0, j = 0, k = 0;

    while (i < n1)
    {
        arr3[k++] = arr1[i++];
    }

    while (j < n2)
    {
        arr3[k++] = arr2[j++];
        }

        sort(arr3, arr3 + n1 + n2);
}


int main()
{

    int n1, n2, i;

    cout << "Enter size of 1st array: ";
    cin >> n1;

    int arr1[n1];

    cout << "Enter elements of 1st array: ";
    for (i = 0; i < n1; i ++)
    {
        cin >> arr1[i];
    }

    cout << "Enter size of 2nd array: ";
    cin >> n2;

    int arr2[n2];
    cout << "Enter elements of 2nd array: ";

    for (i = 0; i < n2; i++)
    {
        cin >> arr2[i];
    }

    int arr3[n1 + n2];

    mergeArrays(arr1, arr2, n1 ,n2 ,arr3);

    cout << "Array after megre: " << endl;

    for(i = 0; i < n1 + n2; i++)
    {
        cout << arr3[i] << " ";

    }

    return 0;
}
