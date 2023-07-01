/*
Write a program to find the volume of the cube using inline function.
*/

#include <iostream>
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
    v.getdata();
    v.display();
    return 0;
}