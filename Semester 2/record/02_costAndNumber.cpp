/*
Write a program to print the item code and cost using default arguments.
*/

#include <iostream>
// #include <conio.h>
using namespace std;
class item
{
    int code;
    float cost;
    public:
    void getdata(int a, float b);
    void putdata();
};
void item::getdata(int a, float b)
{
    code = a;
    cost = b;
}
void item::putdata()
{
    cout<<"Code: "<<code<<endl;
    cout<<"Cost: "<<cost<<endl;
}
int main()
{
    item x,y;
    // clrscr();
    x.getdata(185,298.52);
    y.getdata(300,43.78);
    cout<<"\nObject X"<<endl;
    x.putdata();
    cout<<"\nObject Y"<<endl;
    y.putdata();
    // getch();
    return 0;
}
