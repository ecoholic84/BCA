#include <stdio.h>
#include <stdlib.h>
// #include <conio.h>

void main()
{
  int n, i, *p, sum = 0;
  // clrscr();

  printf("Enter number of elements: ");
  scanf("%d", &n);

  p = (int*) malloc(n * sizeof(int));
 
  if(p == NULL)
  {
    printf("Error! memory not allocated.");
    exit(0);
  }

  printf("Enter elements: ");
  for(i = 0; i < n; ++i)
  {
    scanf("%d", p + i);
    sum += *(p + i);
  }

  printf("Sum = %d", sum);
  
  free(p);
  // getch();
}
