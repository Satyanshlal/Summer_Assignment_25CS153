//Write a program to Recursive reverse number.

#include <stdio.h>
#include <conio.h>

int reverseNumber(int n) {
    int reversed = 0;
    while (n != 0) {

        reversed = reversed * 10 + n % 10;
        n = n / 10;

    }
    return reversed;

}

int main () {
    int n; printf("Enter any integer: ");
    scanf("%d", &n);
    printf("Reverse of %d is %d", n, reverseNumber(n));
    return 0;
}