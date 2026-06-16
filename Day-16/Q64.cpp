//Write a program to Remove duplicates from array.

#include <iostream>
using namespace std;

int Duplicates(int arr[], int n)
{
    int temp[n];
    int a = 0, i, j;

    for(i = 0; i < n; i++)
    {
        bool Duplicates = false;
        for(j = 0; j < a; j++)
        {
            if (arr[i] == temp[j])
            {
                Duplicates = temp;
                break;
            }
        }
        if (!Duplicates)
        {
            temp[a] = arr[i];
            a++;
        }
    }

    cout << "Array after removing duplicates: ";
    for(i = 0; i < a; i++)
    {
        cout << temp[i] << " ";
    }
}


int main()
{

    int n, i;

    cout << "Enter size of the array: ";
    cin >> n;

    int arr[n];

    cout << "Enter array elements: ";
    for(i = 0; i < n; i++)
    {
        cin >> arr[i];
    }


    Duplicates(arr, n);

    return 0;
}