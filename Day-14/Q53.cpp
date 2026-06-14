//Write a program to Linear search.

#include <iostream>
using namespace std;

int main()
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

    cout << "Enter element to search: ";
    cin >> a;

    int pos = -1;

    for(i = 0; i < n; i++)
    {
        if(arr[i] == a)
        {
            pos = i;
            break;
        }
    }

    if(pos != -1)

    cout << "element found at position " << pos + 1;

    else

    cout << "Element not found";

    return 0;
}