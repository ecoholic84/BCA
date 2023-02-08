/*#include <stdio.h>
void main()
{
 int n1,n2,n3;
 printf("Enter three values: ");
 scanf("%d%d%d",&n1,&n2,&n3);

 if(n1>n2 && n1>n3)
  {
  printf("Largest is %d",n1);
  }
 else if(n2>n1 && n2>n3)
  {
   printf("Largest is %d",n2);
  }
 else if(n3>n1 && n3>n2)
  {
   printf("Largest is %d",n3);
  }
 else
  {
   printf("Invalid Input");
  }
}*/

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