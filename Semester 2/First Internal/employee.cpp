#include <iostream>
using namespace std;

class Employee
{
   public:
      string name;
      int id;
      double salary;
      void getdata();
      void display();
};

void Employee::getdata()
{
   cout << "Enter employee name: ";
   getline(cin, name);

   cout << "Enter employee ID: ";
   cin >> id;

   cout << "Enter employee salary: ";
   cin >> salary;
}

void Employee::display()
{
   cout << "\nEmployee details\n";
   cout << "Name: " << name << endl;
   cout << "ID: " << id << endl;
   cout << "Salary: $" << salary << endl;
}

int main()
{
   Employee emp;

   emp.getdata();
   emp.display();

   return 0;
}