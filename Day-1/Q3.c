//Write a program to Find factorial of a number.

#include <stdio.h>
#include <conio.h>

int main () {
    int n, f = 1;      //f=factorial
    printf("Enter a number: ");
    scanf("%d", &n);

    while(n > 0) {
        f = f * n;
        n--;
    }
    printf("Factorial of the given number is %d", f);
    return 0;
}