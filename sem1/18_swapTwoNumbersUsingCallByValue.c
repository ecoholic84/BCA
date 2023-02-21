#include <stdio.h>
// #include <conio.h>
void main()
{
    int a,b;
    void swap(int,int);
    // clrscr();
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    printf("Before Swapping: ");
    printf("a = %d, b = %d\n",a,b);
    swap(a,b);
    // getch();
}

void swap(int x, int y)
{
    int t;
    t=x;
    x=y;
    y=t;
    printf("After Swapping: ");
    printf("a = %d, b = %d",x,y);
}