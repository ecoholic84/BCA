//AIM: To find  a given number in an array and its position

#include <stdio.h>
// #include <conio.h>
void main()
{
    int a[10],n,i,e;
    // clrscr();
    printf("Enter the limit: ");
    scanf("%d",&n);
    printf("Enter the array elements: ");

    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
        printf("Enter number to find: ");
        scanf("%d",&e);
        for(i=0; i<n; i++)
        {
            if(a[i]==e)
            {
                printf("%d is found in the position %d",e,i);
                break;
            }
        }
        if(i==n)
        {
            printf("%d is not found",e);
        }
    }
  // getch();
}

/*
Algorithm:

Step 1: Start
Step 2: Declare a[10],n,i,e
Step 3: Scan n
Step 4: i=0
step 5: If i<n. goto step 6, else go to step 8
Step 6: Scan a[i]
Step 7: i++, goto step 5
Step 8: Read e
Step 9: i=0
Step 10: If i<n, goto step 11, else goto step 14
Step 11: If a[i]==e, goto step 12, else goto step 13
Step 12: Display e is fount in position i, break, goto step 14
Step 13: i++, goto step 10
Step 14: If i==h, goto step 15 else goto step 16
Step 15: Display e is not found
Step 16: Stop
*/