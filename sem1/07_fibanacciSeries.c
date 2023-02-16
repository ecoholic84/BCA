#include <stdio.h>
// #include <conio.h>
void main()
{
    int a=0, b=1, c=0, n;
    // clrscr();
    printf("Enter the limit: ");
    scanf("%d", &n);
    printf("%d%d\t",a,b);
    c=a+b;
    while(c<=n)
    {
        printf("%d\t",c);
        a=b;
        b=c;
        c=a+b;
    }
   // getch();
}

/*
Algorithm:

Step 1: Start
Step 2: Declare variables a=0,b=1,c=0
Step 3: Read value for limit
Step 4: Set c=a+b
Step 5: Repeat steps 6 to 9 while i<n
Step 6: Print c
Step 7: Set a=b
Step 8: Set b=c
Step 9: Set c=a+b
Step 10: Stop
*/