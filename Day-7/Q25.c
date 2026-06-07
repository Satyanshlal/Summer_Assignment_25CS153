//Write a program to Recursive factorial.

#include <stdio.h>
#include <conio.h>

int factorial(int n) {
    if (n == 0) {
        return 1;
    }
    else {
        return n * factorial(n - 1);
    }

    }
int main () {
    int num;
    printf("Enter the integer: ");
    scanf("%d", &num);
    printf("Factorial of %d is %d", num, factorial(num));
    return 0;
}