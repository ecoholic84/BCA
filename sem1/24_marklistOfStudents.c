



// INCOMPLETE
//To create a marklist of n students using structures

#include <stdio.h>
// #include <conio.h>

struct Student
{
    char name[25];
    int reg_no;
    float physics;
    float chemistry;
    float maths;
};

void main()
{
    struct Student s;
    float t,p;
    printf("Enter the Student name: ");
    scanf("%s",s.name);
    printf("Enter the Register number: ");
    scanf("%d",&s.reg_no);
    printf("Enter marks in Physics: ");
    scanf("%f",&s.physics);
    printf("Enter marks in Chemistry: ");
    scanf("%f",&s.chemistry);
    printf("Enter marks in Maths: ");
    scanf("%f",&s.maths);

    t = s.physics + s.chemistry + s.maths;
    printf("Total marks of student: ", t);
}
// INCOMPLETE