//Write a program to Find pair with given sum.

#include <iostream>
using namespace std;

int findpairs(int arr[], int n, int sum)
{

    int count = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == sum)
            {
                count++;
            }
        }
    }
    return count;
}

int main()
{
    int n , sum;

    cout << "Enter size of the array: ";
    cin >> n;

    int arr[n];

    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter target sum: ";
    cin >> sum;

    cout << "Count of pairs is: " << findpairs(arr, n, sum);

    return 0;
}