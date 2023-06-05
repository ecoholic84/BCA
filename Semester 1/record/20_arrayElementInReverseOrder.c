#include<stdio.h>
// #include <conio.h>
void main()
{
   int array[5],i;
   // clrscr();
   printf("Enter elements; ");
   for(i=0;i<5;i++)
   {
      printf("array[%d] :",i);
      scanf("%d",&array[i]);
   }
   printf("\nElements in reverse order: \n");
   for(i=4;i>=0;i--)
   {
      printf("array[%d] :",i);
      printf("%d\n",array[i]);
   }
    // getch();
}