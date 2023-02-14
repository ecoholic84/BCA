#include <stdio.h>
void main()
{
 int a,b,c;
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
}

/*Algorithm:

Step 1: Start
Step 2: Declare a,b,c
Step 3: Print "Enter three values:"
Step 4: Read a,b,c
Step 5: Check if a>b
Step 6: If yes, check if a>c
Step 7: If yes, print 'a' is greatest
Step 8: If a is not greater than c, print c is the greatest
Step 9: If a is not greater than b, check if b > c
Step 10: If yes, print b is the greatest.
Step 11: If b is not greater than c, print c is the greatest.
Step 12: Stop
*/