/*
Write a program to print name, roll no, total marks of student. 
*/

#include <iostream>
using namespace std;

class Student
{
   public:
      char name[20];
      int rl;
      float m1;
      float m2;
      float m3;
      float total;
      void getdata();
      void display();
};

void Student::getdata()
{
   cout << "Enter student name: ";
   cin >> name;

   cout << "Enter student roll number: ";
   cin >> rl;

   cout << "Enter marks in Physics: ";
   cin >> m1;

   cout << "Enter marks in Chemistry: ";
   cin >> m2;

   cout << "Enter marks in Maths: ";
   cin >> m3;

   total = (m1 + m2 + m3);
}

void Student::display()
{
   cout << "\nStudent details\n";
   cout << "Name: " << name <<"\n";
   cout << "Roll No: " << rl <<"\n";
   cout << "Physics Marks: " << m1 <<"\n";
   cout << "Chemistry Marks: " << m2 <<"\n";
   cout << "Maths Marks: " << m3 <<"\n";
   cout << "Total Marks: " << total <<"\n";
}

int main()
{
   Student st;
   st.getdata();
   st.display();
   return 0;
}