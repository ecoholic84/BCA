/*
Program to illustrate inline function.
*/

#include <iostream>
using namespace std;

class Volume
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

inline int Volume::cube()
{
    return(a*a*a);
}

int main()
{
    Volume v;
    v.getdata();
    v.display();
    return 0;
}