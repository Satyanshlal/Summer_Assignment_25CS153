//Write a program to Subtract matrices.

#include <iostream>
using namespace std;

int main(){

int a, b, c, d, i, j;

cout << "Enter number of rows and columns in 1st array: ";
cin >> a >> b;

cout << "Enter number of rows and columns in 2nd array: ";
cin >> c >> d;

int arr1[100][100], arr2[100][100], arr3[100][100];

cout << "Enter the elements of 1st array: \n";
for(i = 0; i < a; i++)
{
for (j = 0; j < b; j++)
   {
    cin >> arr1[i][j];
   }
}

cout << "Enter elements of 2nd array: \n";
for (i = 0; i < c; i++)
{
    for(j = 0; j < d; j++)
    {
        cin >> arr2[i][j];
    }
}

//Adding both matrix

for(i = 0; i < a; i++)
{
    for(j = 0; j < b; j++)
    {
        arr3[i][j] = arr1[i][j] - arr2[i][j];
    }
}

cout << "\n Sum of matrix:\n ";

for(i = 0; i < a; i++)
{
    for (j = 0; j < b; j++)
    {
        cout << arr3[i][j] << " ";
    }
    cout << endl;
}

return 0;
}
