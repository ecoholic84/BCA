#include <iostream>
using namespace std;

class Student {
   public:
      string name;
      int roll_no;
      double physics_marks;
      double chemistry_marks;
      double maths_marks;
      double average_marks;
      void getdata();
      void display();
};

void Student::getdata() {
   cout << "Enter student name: ";
   getline(cin, name);

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

void Student::display() {
   cout << "\nStudent details\n";
   cout << "Name: " << name << endl;
   cout << "Roll No: " << roll_no << endl;
   cout << "Physics Marks: " << physics_marks << endl;
   cout << "Chemistry Marks: " << chemistry_marks << endl;
   cout << "Maths Marks: " << maths_marks << endl;
   cout << "Average Marks: " << average_marks << endl;
}

int main() {
   Student stu;

   stu.getdata();
   stu.display();

   return 0;
}