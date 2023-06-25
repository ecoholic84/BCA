/*
Write a program to print the item code and cost using default arguments.
*/

#include <iostream>
using namespace std;

class Item
{
    int code;
    float cost;
    public:
    void getdata(int a, float b);
    void putdata();
};
void Item::getdata(int a, float b)
{
    code = a;
    cost = b;
}
void Item::putdata()
{
    cout<<"Code: "<<code<<endl;
    cout<<"Cost: "<<cost<<endl;
}
int main()
{
    Item x,y;
    x.getdata(185,298.52);
    y.getdata(300,43.78);
    cout<<"\nObject X"<<endl;
    x.putdata();
    cout<<"\nObject Y"<<endl;
    y.putdata();
    return 0;
}
