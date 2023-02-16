#include <stdio.h>
// #include <conio.h>
void main()
{
    int a,i,j;
    // clrscr();
    printf("Enter number of rows: ");
    scanf("%d",&a);

    for (i=1; i<=a; i++)
    {
        printf("\n");
        for(j=1; j<=i; j++)
        {
            printf("*");
        }
    }
  // getch();
}

/*
Algorithm:

Step 1: Start
Step 2: Declare variable a,i,j
Step 3: Read a
Step 4: Repeat steps 5 to 7 until i<a
Step 5: Print new line and increment i by 1
Step 6: Repeat step 7 until j<=i
Step 7: Print '*' and increment j by 1
Step 8: Stop
*/