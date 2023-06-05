#include <stdio.h>
void main()
{
int MAX = 30;
int a[MAX][MAX];
int i, j, k, arows, acolumns, scalar;
int count = 0;

printf("Enter the rows and columns of the matrix: ");
scanf("%d %d", &arows, &acolumns);

printf("Enter the elements of matrix:\n");

//Scans the matrix
for(i=0; i<arows; i++)
{
    for(j=0; j<acolumns; j++)
    {
        scanf("%d", &a[i][j]);
    }
}

// Read the scalar constant
printf("Enter the scalar constant: ");
scanf("%d", &scalar);


//Checks the matrix for scalar constant
for (i = 0; i < arows; i++) 
{
        for (j = 0; j < acolumns; j++) 
        {
            if (a[i][j] == scalar) 
            {
                count++;
            }

        }
}

//Prints the result
if (count >= 1)
{
    printf("\nScalar constant is present %d times in the matrix", count);
}
else
{
    printf("\nThe Scalar constant isn't present in the matrix");
}
}