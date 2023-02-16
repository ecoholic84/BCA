#include <stdio.h>
// #include <conio.h>
void main()
{
    int n,d,s=0,rev=0;
    // clrscr();
    printf("Enter a number: ");
    scanf("%d",&n);
    do
    {
        d=n%10;
        s=s+d;
        rev=rev*10+d;
        n=n/10;
    }
    while (n>0);
    printf("Reverse=%d",rev);
    printf("\nSum=%d",s);
  // getch();
    
}

/*
Algorithm:

Step 1: Start
Step 2: Declare variables n,d,s,rev
Step 3: Read values for n
Step 4: s=0, rev=0
Step 5: If n>0, go to step 6, else go to step 10
Step 6: Calculate d = n%10
Step 7: Calculate s = s+d
Step 8: Calculate rev = rev*10+d
Step 9: Calculate n = n/10, go to step 5
Step 10: Display rev and 5
Step 11: Stop
*/