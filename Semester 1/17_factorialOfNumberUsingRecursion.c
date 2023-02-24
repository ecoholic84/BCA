#include <stdio.h>
// #include <conio.h>
void main()
{
    int n,f;
    int fact(int);
    // clrscr();
    printf("\nEnter the number: ");
    scanf("%d",&n);
    f = fact(n);
    printf("\n Factorial: %d",f);
    // getch();
}
int fact(int n)
{
    int f;
    if(n==1)
    {
    return(1);
    }
    f = n*fact(n-1);
    return(f);
}