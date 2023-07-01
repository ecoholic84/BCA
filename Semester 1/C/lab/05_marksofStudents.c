/*
Write a C program to read in the rollno and the marks in two subjects (out of 100) for a set of students.
Find the number of students with aggregate marks of 60 percentage or more.
Also find the number of students failed. assuming the pass minimum to be 40 percentage
*/

#include <stdio.h>
void main()
{
    int n, i, rl[100], m1[100], m2[100], total, p, pass=0, fail=0;
    char name[25];
    printf("Enter the number of students: ");
    scanf("%d",&n);
    for(i = 0; i < n; i++)
    {
        printf("Enter the name of the student: ");
        scanf("%s",&name[i]);
        printf("Enter the roll number: ");
        scanf("%d",&rl[i]);
        printf("Enter the marks of Physics: ");
        scanf("%d",&m1[i]);
        printf("Enter the marks of Chemistry: ");
        scanf("%d",&m2[i]);
        total = m1[i] + m2[i];
        p = (total/200.0)*100;

        if (p <= 40)
        {
            fail++;
        }
        
        if (p > 60)
        {
            pass++;
        }
    }
    printf("Number of students passed: %d\n",pass);
    printf("Number of students failed: %d",fail);
}