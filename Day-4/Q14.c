//Write a program to Find nth Fibonacci term.

#include <stdio.h>
#include <conio.h>

int main () {
    int n, a = 0, b = 1, c;
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    if (n == 0 ) {
        printf("Nth Fibonacci term = %d", a);
    }
    else {
        for(int i = 2; i <= n; i++)
        {
            c = a + b;
            a = b;
            b = c;
        }
    }
    printf("Nth Fibonacci term is %d", b);
    return 0;
}