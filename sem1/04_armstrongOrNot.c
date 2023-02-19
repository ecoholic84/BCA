#include <stdio.h>
// #include <conio.h>
void main()
{
    int num, r, n, result = 0;
    // clrscr();
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
    // getch();
}

/*
Algorithm:

Step 1: Start
Step 2: Declare variables num,r,n,result=0
Step 3: Read value into num
Step 4: n=num
Step 5: Repeat steps 6 to 8 while n!=0
Step 6: r=n%10
Step 7: result=result+(r*r*r)
Step 8: n=n/10
Step 9: If result == num, print its a armstrong number, otherwise print its not a armstrong number
Step 10: Stop
*/