/*
Write a program to display,
name, employee id and salary of emplyoees,
whose salary is greater than 15000.
*/

#include <iostream>
using namespace std;

class employee
{
    char name[25];
    int emp_id;
    public:
    float salary;
    void getdata();
    void putdata();
};

void employee::getdata()
{
    cout<<"Enter Employee Name: ";
    cin>>name;
    cout<<"Enter Employee Id: ";
    cin>>emp_id;
    cout<<"Enter Employee Salary: ";
    cin>>salary;
    cout<<endl;
}

void employee::putdata()
{
    cout<<"Name: "<<name<<endl;
    cout<<"Employee Id: "<<emp_id<<endl;
    cout<<"Employee Salary: "<<salary<<endl;
    cout<<endl;
}

int main()
{
    int n, i;
    cout<<"Enter Number of Employees: ";
    cin>>n;
    employee e[n];
   
    bool greaterSalary = false;

    for (i = 0; i < n; i++)
    {   
        e[i].getdata();
    }

    for (i = 0; i < n; i++)
    {  
        if (e[i].salary > 15000)
        {
            if (!greaterSalary)
            {
                cout<<"Employees with salary above 15000:"<<endl<<endl;
                greaterSalary = true;
            }
            e[i].putdata();
        }
    }

    if (!greaterSalary)
    {
        cout<<"No Employees with salary above 15000"<<endl;
    }
}

