#include <iostream>
// #include <conio.h>
using namespace std;
class Student
{
protected:
    int rn;

public:
    void getnum()
    {
        cout << "Enter roll number: ";
        cin >> rn;
    }
    void putnum()
    {
        cout << "Roll number: " << rn << endl;
    }
};

class Test : public Student
{
protected:
    float m1, m2;

public:
    void getmark()
    {
        cout << "Enter marks of Physics: ";
        cin >> m1;
        cout << "Enter marks of Chemistry: ";
        cin >> m2;
    }
    void putmark()
    {
        cout << "Marks of Physics: " << m1 << endl;
        cout << "Marks of Chemistry: " << m2 << endl;
    }
};

class Result : public Test
{
    float total;

public:
    void display()
    {
        total = m1 + m2;
        putnum();
        putmark();
        cout << "Total: " << total << endl;
    }
};
int main()
{
    Result stud1;
    // clrscr();
    stud1.getnum();
    stud1.getmark();
    stud1.display();
    // getch();
    return 0;
}