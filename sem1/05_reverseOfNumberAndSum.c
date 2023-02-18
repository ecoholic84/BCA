#include <stdio.h>
// include <conio.h>
void main()
{
    int a,b,d,s=0;
    // clrscr();
    printf(" Enter a number: ");
    scanf("%d",&a);
    printf("Reverse: ");

    while(a>0)
    {
        b=a%10;
        s=s+b;
        printf("%d",b);
        a=a/10;
    }
    printf("\nSum: %d",s);
  // getch();
}

/*
Algorithm:
Step 1: Start
Step 2: Declare variables a,b,d,s=0
Step 3: Scan a
Step 4: Repeat steps 5 to 8 until a>0
Step 5: b=a%10
Step 6: s=s+b
Step 7: Print b
Step 8: a=a/10
Step 9: Print s
Step 10: Stop
*/