/*
Write a program to print name, roll number, total marks of a student.
*/

#include <iostream>
using namespace std;

class Student
{
    char name[20];
    int rl;
    float m1,m2,m3;
    public:
    void getdata();
    void putdata();
};

void Student::getdata()
{
    cout<<"Enter student name: ";
    cin>>name;
    cout<<"Enter roll number: ";
    cin>>rl;
    cout<<"Enter marks of Physics: ";
    cin>>m1;
    cout<<"Enter marks of Chemistry: ";
    cin>>m2;
    cout<<"Enter marks of Maths: ";
    cin>>m3;
}

void Student::putdata()
{
    cout<<"\nStudent Details\n";
    cout<<"Name: "<<name<<endl;
    cout<<"Roll Number: "<<rl<<endl;
    cout<<"Marks of Physics: "<<m1<<endl;
    cout<<"Marks of Chemistry: "<<m2<<endl;
    cout<<"Marks of Maths: "<<m3<<endl;
    cout<<"Total Marks: "<<(m1+m2+m3)<<endl;
}

int main()
{
    Student std;
    std.getdata();
    std.putdata();
    return 0;
}