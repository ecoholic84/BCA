/*
Write a C program to check whether a given integer is prime.
If it is not a prime number display all its factors excluding 1 and that number.
*/

#include <stdio.h>
void main()
{
    int i, n, notPrime=0;
    printf("Enter a integer: ");
    scanf("%d", &n);

    for (i=2; i<n; i++)
    {
        if (n%i == 0)
        {
            notPrime=1;
            printf("%d\t", i);
        }
    }

    if (notPrime == 0)
    {
        printf("\n%d is a prime number", n);
    }
    else
    {
        printf("\n%d is not a prime number", n);    
    }
}