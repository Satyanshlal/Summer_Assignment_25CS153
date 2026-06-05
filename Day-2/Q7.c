//Write a program to Find product of digits.

#include <stdio.h>

int main () {
    int n, p = 1; //p=product 
    printf("Enter any number: ");
    scanf("%d", &n);
 
    do {
        p = p * (n % 10);
        n = n / 10;

    }
    while (n > 0);
    printf("Product of digits of number is %d", p);
    return 0;
    
}