//Write a program to Count digits in a number.

#include <stdio.h>
#include <conio.h>

int main () {
    int n, count = 0;    //n= number and count= number of digits in the given number
    printf("Enter any number: ");
    scanf("%d", &n);

    while (n != 0){
        n = n/10;
        count++;
    
    }
    printf("Number of digits in the given number is %d", count);
    return 0;
}