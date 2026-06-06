//Write a program to Find LCM of two numbers.

#include <stdio.h>
#include <conio.h>

int main ()
{
    int n1, n2, i, lcm;

    printf("Enter any two numbers: ");
    scanf("%d%d", &n1, &n2);

    for ( i = 1; i <= n1 * n2; i++)
    {
        if (i % n1 == 0 && i % n2 == 0)
        {
            lcm = i;
            break;
        }
    }
    printf("LCM of %d and %d is: %d", n1, n2, lcm);
    return 0;
}