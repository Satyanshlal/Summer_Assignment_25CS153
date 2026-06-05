//Write a program to Check whether a number is palindrome.

#include <stdio.h>
#include <conio.h>

int main () {

    int n, dig, rev = 0;
    printf("Enter any number: ");
    scanf("%d", &n);
    int temp = n; //temp is use to store the value 

    while (n > 0) {
        dig = n % 10;
        rev = rev * 10 + dig;
        n = n / 10;
    }
    if (temp == rev) {
        printf("The number is palindrome");
    }
    else {
        printf("The number is not palindrome");
    }
    return 0;
}