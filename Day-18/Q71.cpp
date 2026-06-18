//Write a program to Binary search.

#include <iostream>
using namespace std;

int main()
{
    int n, s, i;

    cout << "Enter the size of array: ";
    cin >> n;

    int arr[n];
    cout << "Enter elements of array: ";
    for(i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter the element to search: ";
    cin >> s;

    int low = 0;
    int high = n - 1;
   
    
    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if( arr[mid] == s)
        {
            cout << "Element found at position " << mid + 1;
           
            break;
        }
        else if (arr[mid] < s)
        {
            low = mid + 1;
        }
        else 
        {
            high = mid - 1;
        }
        if (arr[mid] != s)
       {
         cout << "Element not found.";
        }
    
    }

    
 return 0;

}