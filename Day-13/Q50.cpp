//Write a program to Find sum and average of array.

#include <iostream>
using namespace std;


int main ()
{

    int n, i, sum = 0;


    cout << "Eneter size of the array: ";
    cin >> n;


    int arr[n];

    cout << "Enter " << n << " elements:" << endl;

    for (i = 0; i < n; i++)
    {

        cin >> arr[i];
        sum = sum + arr[i];
    }

    float average = (float)sum / n;

    cout << "Sum = " << sum << endl;
    cout << "Average = " << average << endl;

    return 0;
}