/* 
Write a C program to display all Fibonacci Numbers in the range 1 to 400.
How many of them are multiples of 3.
The Fibonnaci series is given as 1 1 2 3 5 8 13 21 34
*/

#include <stdio.h>
int main()
{
    int i, a=0, b=1, c=0, count=0;
    for(i=0; i<400; i++)
    {
        printf("%d%d\t",a,b);
        c=a+b;
        while(c <= 400)
        {
            if(c % 3 == 0)
            {
                count=count+1;
            }
            printf("%d\t",c);
            a=b;
            b=c;
            c=a+b;
        }
    }
    printf("Total multiples of 3: %d", count);
    return 0;
}
