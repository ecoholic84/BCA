#include <stdio.h>
#include <math.h>
void main()
{
    int a, b, c, x1, x2;
    printf("Enter a,b,c: ");
    scanf("%d%d%d", &a, &b, &c);

    if(b*b > 4*a*c)
     {
        x1 = -b+sqrt(b*b-4*a*c)/2*a;
        x2 = -b-sqrt(b*b-4*a*c)/2*a;
        printf("x1: %d\nx2: %d",x1,x2);
     }
    else
     {
      printf("Roots are imaginary");
     }
}