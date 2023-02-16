#include <stdio.h>
// #include <conio.h>
void main()
{
 int a,b,c;
 // clrscr();
 printf("Enter three values: ");
 scanf("%d%d%d",&a,&b,&c);

 if (a > b)
 {
  if (a > c)
  {
    printf("%d is the greatest.",a);
  }
  else
  {
    printf("%d is the greatest.",c);
  }
 }
 else
 {
  if (b > c)
  {
    printf("%d is the greatest.",b);
  }
  else
  {
    printf("%d is the greatest.",c);
  }
 }
 // getch();
}

/*
Algorithm:

Step 1: Start
Step 2: Declare variables a,b,c
Step 3: Read values for a,b,c
Step 4: Check if a>b, then go to step 5 otherwise go to step 6
Step 5: Check if a>c, then display "a is greatest" otherwise display "c is greatest"
Step 6: Chcek if b>c, then go to step 7, otherwise go to step 8
Step 7: Display "b is greatest"
Step 8: Display "c is greatest"
Step 9: Stop
*/