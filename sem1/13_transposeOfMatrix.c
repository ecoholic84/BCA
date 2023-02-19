#include <stdio.h>
// #include <conio.h>
void main()
{
    int i,j,r,c;
    int A[10][10];
    // clrscr();
    printf("Enter order of matrix:\n");
    scanf("%d%d",&r,&c);

    printf("Enter elements:\n");
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            scanf("%d",&A[i][j]);
        }
    }
    printf("Transpose:\n");

    for(j=0; j<c; j++)
    {
        for(i=0; i<r; i++)
        {
            printf("%d\t",A[i][j]);
        }
        printf("\n");
    }
    // getch();
}