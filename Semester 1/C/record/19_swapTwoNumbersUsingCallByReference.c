#include <stdio.h>
// #include <conio.h>
void swap(int *, int *);
void main()
{
    int a,b;
    // clrscr();
    printf("\nEnter a and b: ");
    scanf("%d%d",&a,&b);
    swap(&a,&b);
    printf("\na=%d, b=%d",a,b);
    // getch();
}

void swap(int *a, int*b)
{
    int t;
    t = *a;
    *a = *b;
    *b = t;
}