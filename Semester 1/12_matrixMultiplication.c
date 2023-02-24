#include <stdio.h>
// #include <conio.h>
void main()
{
    int i, j, k, m, n, p, q;
    int A[10][10], B[10][10], C[10][10];
    // clrscr();
    
    printf("Enter the number of rows and coulumns of Matrix A: ");
    scanf("%d%d",&m,&n);

    printf("Enter the elements in Matrix A:\n");
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            scanf("%d",&A[i][j]);
        }
    }

    printf("Matrix A: \n");
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("\t%d",A[i][j]);
        }
        printf("\n");
    }

    printf("Enter the number of rows and coulumns of Matrix B: ");
    scanf("%d%d",&p,&q);

    printf("Enter the elements in Matrix A:\n");
    for(i=0; i<p; i++)
    {
        for(j=0; j<q; j++)
        {
            scanf("%d",&B[i][j]);
        }
    }

    printf("Matrix B: \n");
    for(i=0; i<p; i++)
    {
        for(j=0; j<q; j++)
        {
            printf("\t%d",B[i][j]);
        }
        printf("\n");
    }

    printf("Product of the matrix:\n");
    for(i=0; i<m; i++)
    {
        for(j=0; j<q; j++)
        {
            C[i][j] = 0;
            for(k=0; k<q; k++)
            {
                C[i][j]+=A[i][k]*B[k][j];
            }
        }
    }

    for(i=0; i<m; i++)
    {
        for(j=0; j<q; j++)
        {
        printf("%d\t",C[i][j]);
        }
    printf("\n");
    }
  // getch();
}