//Write a program to Print Armstrong numbers in a range.

#include <stdio.h>
#include <conio.h>

int main () {
    int n, originalNum, remainder, result = 0;
    printf("Enter the range: ");
    scanf("%d", &n);
 printf("Armstrong numbers in the range 1 to %d are:", n);
 for (int num = 1; num <= n; num++) {
    originalNum = num;
    while (originalNum != 0) {
        remainder = originalNum  % 10;
        result = result + remainder * remainder * remainder;
        originalNum = originalNum / 10;
    }
    if (result == num) {
        printf("%d ", num);
    }
    result = 0;
 }
 return 0;
}

