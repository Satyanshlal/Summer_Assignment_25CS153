//Write a program to Find sum of digits of a number.

#include <stdio.h>
#include<conio.h>

int main () {
    int n, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);

    do {
        sum = sum + n % 10;
        n = n / 10;
    }  
    while (n > 0);
    printf("Sum of digits of number is %d", sum);
    return 0;

}