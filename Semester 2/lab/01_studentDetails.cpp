#include <iostream>
using namespace std;

class Student
{
   public:
      char name[20];
      int roll_no;
      float physics_marks;
      float chemistry_marks;
      float maths_marks;
      float average_marks;
      void getdata();
      void display();
};

void Student::getdata()
{
   cout << "Enter student name: ";
   cin >> name;

   cout << "Enter student roll number: ";
   cin >> roll_no;

   cout << "Enter marks in Physics: ";
   cin >> physics_marks;

   cout << "Enter marks in Chemistry: ";
   cin >> chemistry_marks;

   cout << "Enter marks in Maths: ";
   cin >> maths_marks;

   average_marks = (physics_marks + chemistry_marks + maths_marks) / 3.0;
}

void Student::display()
{
   cout << "\nStudent details\n";
   cout << "Name: " << name <<"\n";
   cout << "Roll No: " << roll_no <<"\n";
   cout << "Physics Marks: " << physics_marks <<"\n";
   cout << "Chemistry Marks: " << chemistry_marks <<"\n";
   cout << "Maths Marks: " << maths_marks <<"\n";
   cout << "Average Marks: " << average_marks <<"\n";
}

int main()
{
   Student st;
   st.getdata();
   st.display();
   return 0;
}