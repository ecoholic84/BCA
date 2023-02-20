#include <stdio.h>
// #include <conio.h>
    struct Employee
    {
        char name[25];
        int id;
        float salary;
    };

    void main()
    {
        struct Employee emp;
        // clrscr();
        printf("Enter the employee name: ");
        scanf("%s",emp.name);
        printf("Enter the employee ID: ");
        scanf("%d",&emp.id);
        printf("Enter the employee salary: ");
        scanf("%f",&emp.salary);

        printf("Salary Report for Employee : %s\n", emp.name);
        printf("Salary: $%.2f\n", emp.salary);

        // getch();
    }