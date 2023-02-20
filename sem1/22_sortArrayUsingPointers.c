#include <stdio.h>
// #include <conio.h>
void main()
{
    int a[10], n, j, i, t;
    int *p, *b[10];
    // clrscr();
    printf("Enter the limit: ");
    scanf("%d",&n);
    *p = &n;

    printf("Enter array elements: ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }


    printf("\nBefore starting array is: ");
    for(i=0; i<n; i++)
    {
        printf("%d\t",a[i]);
    }


    for(i=0; i<(n-1); i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(a[i]>a[j])
            {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
    printf ("\nAfter sorting array");
    for(i=0; i<n; i++)
    {
        printf("%d\t",a[i]);
    }
  // getch();
}