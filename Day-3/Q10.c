// Write a program to Print prime numbers in a range.

#include <stdio.h>
#include <conio.h>

int main ()
{
    int i, j, n1, n2, x;
    printf("Enter the range: ");
    scanf("%d%d", &n1, &n2);

    printf("Prime numbers between %d and %d are: ", n1, n2);
    for (i = n1; i <= n2; i++)
    {
        if (i == 1 || i == 0)
        continue;
        x = 1;
        for (j = 2; j <= i / 2; j++)
        {
            if (i % j ==0)
            {
                x = 0;
                break;
            }

        }
        if ( x == 1)
        {
            printf("%d ,", i);
        }
    }
    return 0;

}
