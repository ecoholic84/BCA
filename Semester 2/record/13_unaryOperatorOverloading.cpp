#include <iostream>
// #include <conio.h>
using namespace std;

class space
{
    int x;
    int y;
    int z;
    public:
     void get();
     void put();
     void operator-();
};

void space::get()
{
    
    cout<<"Enter x: ";
    cin>>x;
    
    cout<<"Enter y: ";
    cin>>y;
    
    cout<<"Enter z: ";
    cin>>z;
   
}

void space::put()
{
    cout<<"x: "<<x<<"\n";
    
    cout<<"y: "<<y<<"\n";
    
    cout<<"z: "<<z<<"\n";
}

void space::operator-()
{
    x=-x;
    y=-y;
    z=-z;
}

int main()
{
    space m;
    // clrscr();
    m.get();
    m.put();
    cout<<"\nOverloaded : "<<"\n";
    -m;
    m.put();
    // getch();
    return(0);
}