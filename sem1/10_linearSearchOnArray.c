//AIM: To find  a given number in an array and its position

#include <stdio.h>
// #include <conio.h>
void main()
{
    int a[10],n,i,e;
    // clrscr();
    printf("Enter the limit: ");
    scanf("%d",&n);
    printf("Enter the array elements: ");

    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
        printf("Enter number to find: ");
        scanf("%d",&e);
        for(i=0; i<n; i++)
        {
            if(a[i]==e)
            {
                printf("%d is found in the position %d",e,i);
                break;
            }
        }
        if(i==n)
        {
            printf("%d is not found",e);
        }
    }
  // getch();
}