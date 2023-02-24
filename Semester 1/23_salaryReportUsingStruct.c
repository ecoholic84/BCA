#include <stdio.h>
// #include <conio.h>
    struct Employee
    {
        char name[25];
        int id;
        float salary;
        float bonus;
        float total;
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
        printf("Enter the employee bonus: ");
        scanf("%f",&emp.bonus);
        emp.total = emp.salary + emp.bonus;
        printf("\nSalary Report of %s:\n", emp.name);
        printf("Salary: $%.2f\n", emp.salary);
        printf("Bonus: $%.2f\n", emp.bonus);
        printf("Total Salary: $%.2f\n", emp.total);
        // getch();
    }