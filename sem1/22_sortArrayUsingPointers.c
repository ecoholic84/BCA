#include <stdio.h>
// #include <conio.h>
void sort(int *a, int n)
{
    int i, j, temp;
    for (i = 0; i < n-1; i++)
    {
        for (j = i+1; j < n; j++)
        {
            if (*(a+i) > *(a+j))
            {
                temp = *(a+i);
                *(a+i) = *(a+j);
                *(a+j) = temp;
            }
        }
    }
}

void main()
{
    int num;
    // clrscr();

    printf("Enter the limit: ");
    scanf("%d",&num);

    int a[num];

    printf("Enter array elements: ");
    for(int i = 0; i<num; i++)
    {
        scanf("%d",&a[i]);
    }

    int n = sizeof(a)/sizeof(a[0]);
    int i;
    
    printf("Original array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", *(a+i));
    }
    printf("\n");
    
    sort(a, n);
    
    printf("Sorted array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", *(a+i));
    }
    printf("\n");
    // getch();
}
