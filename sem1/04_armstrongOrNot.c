#include <stdio.h>
#include <math.h>
void main()
{
    int num, r, n, result = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    n = num;

    while (n != 0)
    {
        r=n%10;
        result = result+(r*r*r);
        n=n/10;
    }

    if (result == num)
        {
        printf("%d is an Armstrong number.", num);
        }
    else
        {
        printf("%d is not an Armstrong number.", num);
        }
}

/*
Algorithm:

Step 1: Start
Step 2: Declare num,r,n,result=0
Step 3: Print "Enter an integer: "
Step 4: Scan and store the value in num
Step 5: n=num
Step 6: Create a while loop with condition n!=0
Step 7: Inside the loop, do r=n%10
Step 8: result=result+(r*r*r)
Step 9: n=n/10
Step 10: Repeat the steps 7-9 until the condition 'n != 0' is false
Step 11: If, result == num, print its a armstrong number
Step 12: Else, print its not a armstrong number
Step 13: Stop
*/