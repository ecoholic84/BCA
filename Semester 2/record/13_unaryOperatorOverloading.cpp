#include <iostream>
using namespace std;

class Space
{
    int x;
    int y;
    int z;
    public:
     void get();
     void put();
     void operator-();
};

void Space::get()
{
    cout<<"Enter x: ";
    cin>>x;
    
    cout<<"Enter y: ";
    cin>>y;
    
    cout<<"Enter z: ";
    cin>>z; 
}

void Space::put()
{
    cout<<"x: "<<x<<"\n";
    
    cout<<"y: "<<y<<"\n";
    
    cout<<"z: "<<z<<"\n";
}

void Space::operator-()
{
    x=-x;
    y=-y;
    z=-z;
}

int main()
{
    Space m;
    m.get();
    m.put();
    cout<<"\nOverloaded : "<<"\n";
    -m;
    m.put();
    return 0;
}