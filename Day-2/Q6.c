//Write a program to Reverse a number.

#include <stdio.h>
#include <conio.h>

int main () {
    int n, digit,  rev = 0;
    printf ("Enter any number: ");
    scanf("%d", &n);

    while (n >0) {
        digit = n % 10;
        rev = rev * 10 + digit;
        n = n / 10;
    }
    printf("Reverse of the the number = %d", rev);
    return 0;
}