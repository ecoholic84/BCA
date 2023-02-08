#include <stdio.h>
void main()
{
    int a,b,d;
    printf(" Enter the number: ");
    scanf("%d",&a);
    
    while(a>0)
    {
        b=a%10;
        printf("%d",b);
        a=a/10;
    }
}