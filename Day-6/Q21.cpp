//Write a program to Convert decimal to binary.

#include <iostream>
using namespace std;


int main ()

{

  int n, binary = 0, place = 1;

  cout << "Enter a decimal number: ";
  cin >> n;

  while (n > 0)

  {
    int rem = n % 2;
    binary = binary + rem * place;
    place = place * 10;
    n = n / 2;
  }


  cout << "Binary = " << binary;


  return 0;
}