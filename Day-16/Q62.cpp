//Write a program to Find maximum frequency element.

#include <iostream>
using namespace std;

int most_occurred_number(int arr[], int size)
{
    int max_count = 0;
    cout << "\nMost Frequent number is: ";

    for(int i = 0; i < size; i++)
    {
    
        int count = 1;
        for(int j = i + 1; j < size; j++)
        
            if (arr[i] == arr[j])
            
                count++;
            
        
        if (count > max_count)
        
            max_count = count;
    }   


    for (int i = 0; i < size; i++)
    {
        int count = 1;
        for(int j = i + 1; j < size; j++)
        if (arr[i] == arr[j])
        
            count++;
        
        if (count == max_count)
        
            cout << arr[i] << endl;
        
    }
}

int main()
{
    int arr[] = {1, 2, 3, 5, 7, 3, 8, 3};
    int n = sizeof(arr) / sizeof(arr[0]);  
    cout << "Original array: ";

    for (int i = 0; i< n; i++)
    cout << arr[i] << " ";

    most_occurred_number(arr, n);

    return 0;
}