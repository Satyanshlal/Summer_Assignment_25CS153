//Write a program to Union of arrays.

#include <iostream>
#include <set>
using namespace std;

int main()
{
    int n1, n2;

    cout << "Enter size of 1st array: ";
    cin >> n1;

    int arr1[n1];
    cout << "ENter elements of 1st array: ";
    for (int i = 0; i < n1; i++)
    {
        cin >> arr1[i];
    }

    cout << "Enter size of 2nd array:";
    cin >> n2;

    int arr2[n2];
    cout << "Enter elements of 2nd array: ";
    for (int i = 0; i < n2 ; i++)
    {
     cin >> arr2[i];
    }

    set<int> s;

    for(int i = 0; i < n1; i++)
    {
        s.insert(arr1[i]);
    }

    for(int i = 0; i< n2; i++)
    {
        s.insert(arr2[i]);
    }

    cout << "Union of arrays: ";
    for(auto x : s) {
        cout << x << " ";
    }

    return 0;
}