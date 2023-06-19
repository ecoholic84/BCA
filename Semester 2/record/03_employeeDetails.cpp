/*
Write a program to print details of a employee.
*/

#include <iostream>
// #include <conio.h>
using namespace std;

class Employee
{
   public:
      char name[20];
      int id;
      double salary;
      void getdata();
      void display();
};

void Employee::getdata()
{
   cout << "Enter employee name: ";
   cin >> name;

   cout << "Enter employee ID: ";
   cin >> id;

   cout << "Enter employee salary: ";
   cin >> salary;
}

void Employee::display()
{
   cout << "\nEmployee details\n";
   cout << "Name: " << name;
   cout << "\nID: " << id;
   cout << "\nSalary: $" << salary;
}

int main()
{
   Employee emp;
   // clrscr();
   emp.getdata();
   emp.display();
   // getch();
   return 0;
}