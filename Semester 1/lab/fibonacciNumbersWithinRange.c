/* 
Write a C program to display all Fibonacci Numbers in the range 1 to 400.
How many of them are multiples of 3.
The Fibonnaci series is given as 1 1 2 3 5 8 13 21 34
*/

#include <stdio.h>

int main()
{
    int a = 1, b = 1, c, count = 0;
    printf("Fibonacci numbers in the range 1 to 400:\n");
    printf("%d ", a);
    while (b <= 400)
    {
        printf("%d ", b);
        if (b % 3 == 0)
        {
            count++;
        }
        c = a + b;
        a = b;
        b = c;
    }
    printf("\nNumber of Fibonacci numbers that are multiples of 3: %d", count);
    return 0;
}

