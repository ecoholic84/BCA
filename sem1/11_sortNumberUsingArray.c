// AIM: To sort n numbers using array.

#include <stdio.h>
// #include <conio.h>
void main()
{
    int a[10],n,j,i,t;
    // clrscr();
    printf("Enter the limit: ");
    scanf("%d",&n);
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

    printf("\nAfter sorting array: ");
    for(i=0; i<n; i++)
    {
        printf("%d\t",a[i]);
    }
  // getch();
}

/*
[wrong] Algorithm:

Step 1: Start
Step 2: Declare a[10],n,i,j,t
Step 3: Read n
Step 4: Read a
Step 5: Print a
Step 6: Repeat steps 7 to 8 until i<(n-1)
STep 7: j=i+1
Step 8: Repeat steps 7 to 9 until j<n
Step 9: If a[i]>a[j], go to step 10 else go to step 13
Step 10: t=a[i]
Step 11: a[i]=a[j]
Step 12: a[j]=t
Step 13: Stop
*/