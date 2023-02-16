#include <stdio.h>
// #include <conio.h>
void main()
{
  int limit, i, j;
  // clrscr();
  printf("Enter the limit: ");
  scanf("%d", &limit);
  printf("Prime numbers are:\n");
  
  for (i = 2; i <= limit; i++)
   {
    for (j = 2; j <= i/2; j++)
        {
         if (i % j == 0)
           {
            break;
           }
        }

    if (j>i/2)
        {
         printf("%d\n", i);
        }
   }
  // getch();
}

/*
Algorithm:

Step 1: Start
Step 2: Declare variables limit,i ,j
Step 3: Read value for limit
Step 4: i=2
Step 5: If i=limit, go to step 6, otherwise go to step 12
Step 6: j=2
Step 7: If j<=i/2, go to step 8 else go to step 9
Step 8: If i%j==0, break, else i++ go to step 7
Step 9: If j>i/2, go to step 10 else go to step 11
Step 10: Display i
Step 11: i++ go to step 5
Step 12: Stop
*/