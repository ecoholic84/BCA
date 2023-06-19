/*
Program to illustrate inline function.
*/

#include <iostream>
// #include <conio.h>
using namespace std;

class volume
{
    int a;
    public:
    void getdata()
    {
        cout<<"Enter side: ";
        cin>>a;
    }
    void display()
    {
        cout<<"Volume: "<<cube();
    }
    int cube();
};

inline int volume::cube()
{
    return(a*a*a);
}

int main()
{
    volume v;
    // clrscr();
    v.getdata();
    v.display();
    // getch();
    return 0;
}