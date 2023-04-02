#include <iostream.h>
#include <conio.h>

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
   clrscr();
   Employee emp;

   emp.getdata();
   emp.display();
   getch();

   return 0;
}