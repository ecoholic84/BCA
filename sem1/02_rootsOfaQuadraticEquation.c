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

/*Algorithm:

Step 1: Start
Step 2: Declare a,b,c,x1,x2
Step 3: Print "Enter a,b,c: "
Step 4: Scan a,b,c
Step 5: Check if b^2 > 4*a*c
Step 6: If yes, calculate x1 and x2 using2:
x1 = -b + sqrt(b^2-4ac)/2a
x2 = -b - sqrt(b^2-4ac)/2a
Step 7: Print x1 and x2
Step 8: If b^2 is not greater than 4*a*c, print "Roots are imaginery"
Step 9: Stop
*/