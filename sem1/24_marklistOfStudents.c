#include <stdio.h>
// #include <conio.h>

struct Student
{
    char name[25];
    int reg_no;
    float physics;
    float chemistry;
    float maths;
    float total;
    float percen;
};

void main()
{
    int i,n;

    printf("Limit: ");
    scanf("%d",&n);

    struct Student s[n];
    // clrscr();

    for (i = 0; i < n; i++)
    {
        printf("Enter the Student name: ");
        scanf("%s",s[i].name);
        printf("Enter the Register number: ");
        scanf("%d",&s[i].reg_no);
        printf("Enter marks of Physics: ");
        scanf("%f",&s[i].physics);
        printf("Enter marks of Chemistry: ");
        scanf("%f",&s[i].chemistry);
        printf("Enter marks of Maths: ");
        scanf("%f",&s[i].maths);
        s[i].total = s[i].physics + s[i].chemistry + s[i].maths;
        s[i].percen = s[i].total/3;
    }

    printf("Marklist:\n");
    for (i = 0; i < n; i++)
    {
        printf("Name: %s\n", s[i].name);
        printf("Register Number: %d\n", s[i].reg_no);
        printf("Score of Physics: %.2f\n", s[i].physics);
        printf("Score of Chemistry: %.2f\n", s[i].chemistry);
        printf("Score of Maths: %.2f\n", s[i].maths);
        printf("Total score: %.2f\n", s[i].total);
        printf("Percentage: %.2f\n\n", s[i].percen);
    }
  // getch();
}