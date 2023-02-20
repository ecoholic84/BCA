#include <stdio.h>
// #include <conio.h>
void main()
{
    int a,b,*p,*j;
    // clrscr();
    printf("Enter values for a and b: ");
    scanf("%d%d", &a, &b);
    p = &a;
    j = &b;
    printf("Addition: %d\n",*p+*j);
    printf("Subtrtaction: %d\n",*p-*j);
    printf("Product: %d\n",(*p)*(*j));
    printf("Division: %d\n",(*p)/(*j));
    printf("Remainder: %d\n",(*p)%(*j));
    // getch();
}