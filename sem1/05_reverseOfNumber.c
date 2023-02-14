#include <stdio.h>
void main()
{
    int a,b,d;
    printf(" Enter a number: ");
    scanf("%d",&a);
    
    while(a>0)
    {
        b=a%10;
        printf("%d",b);
        a=a/10;
    }
}

/*
Algorithm:

Step 1: Start
Step 2: Declare a,b,d
Step 3: Print "Enter a number: "
Step 4: Scan a
Step 5: Create a while loop with condition a>0
Step 6: Inside the while loop, compute remainder of 'a' and store it in 'b'
Step 7: Print b
Step 8: Update the value of 'a' by dividing it by 10 and storing the quotient in 'a'
Step 9: End the while loop.
Step 10: Stop
*/