// AIM: To create multiplication table using nested for loop

#include <stdio.h>
// #include <conio.h>
void main()
{
    int n,i,j;
    // clrscr();
    printf("Enter any number: ");
    scanf("%d",&n);
    printf("Multiplication table of %d: ",n);

    for(i=1; i<=1; i++);
    {
        for(j=1; j<=10; j++)
        {
            printf("\n%d*%d = %d",j,n,j*n);
        }
    }
  // getch();
}

/*
Algorithm:
Step 1: Start
Step 2: Declare variable n,i,j
Step 3: Repeat steps 4,5,6,7 until i>1
Step 4: Repeat steps 5,6 until j>10
Step 5: Print j*n = (n*j)
Step 6: j = j+1
Step 7: i = i+1
Step 8: Stop
*/