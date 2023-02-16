#include <stdio.h>
// #include <conio.h>
#include <math.h>
void main()
{
    int a, b, c, x1, x2;
    // clrscr();
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
   // getch();

}

/*Algorithm:

Step 1: Start
Step 2: Declare variables a,b,c,x1,x2
Step 3: Read values for a,b,c
Step 4: Check if b^2 > 4*a*c, then go to step 5 otherwise go to step 7
Step 5: Calculate x1 and x2 using:
x1 = -b + sqrt(b^2-4ac)/2a
x2 = -b - sqrt(b^2-4ac)/2a
Step 6: Print x1 and x2
Step 7: Print "Roots are imaginery"
Step 8: Stop
*/