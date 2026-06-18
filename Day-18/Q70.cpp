//Write a program to Selection sort.

#include <iostream>
using namespace std;

int main()
{
    int n, i, j, temp;


    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];
     cout << "Enter the elements of array: ";
         for (i = 0; i < n; i++)
         {
            cin >> arr[i];
         }


         for (i = 0; i < n - 1; i++)
         {
            int min = i;

            for (j = i + 1; j < n; j++)
            {
                if (arr[j] < arr[min])
                {
                    min = j;
                }
            }

            temp = arr[min];
            arr[min] = arr[i];
            arr[i] = temp;
         }

         cout << "sorted array: ";
        
            for(i = 0; i < n; i++)
            {
                cout << arr[i] << " ";
            }
        
            return 0;
}