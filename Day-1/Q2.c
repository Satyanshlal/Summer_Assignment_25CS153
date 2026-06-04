//Write a program to Print multiplication table of a given number.

#include <stdio.h>
#include <conio.h>

int main () {
    int n;
    printf("Enter any number: ");
    scanf("%d", &n);
printf("Multiplication table of %d is : ", n);
   for (int i = 1; i<= 10; i++){
    printf("%d x %d = %d\n", n, i, n*i);
   }
   return 0;
}