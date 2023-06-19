#include <iostream>
using namespace std;
class item
{
    int number;
    float cost;
    public:
    void getdata(int n=0, float c=0);
    void putdata();
};
void item::getdata(int n, float c)
{
    cout<<"Enter the number: ";
    cin>>number;
     if (n != 0)
     {
        number = n;
     }
    cout<<"Enter the cost: ";
    cin>>cost;
    if (c != 0)
    {
        cost = c;
    }
}
void item::putdata()
{
    cout<<"Number: "<<number<<"\n";
    cout<<"Cost: "<<cost<<"\n";
}
int main()
{
    item x,y;
    cout<<"\nObject X"<<"\n";
    x.getdata();
    cout<<"\nObject Y"<<"\n";
    y.getdata();
    cout<<"\nObject X"<<"\n";
    x.putdata();
    cout<<"\nObject Y"<<"\n";
    y.putdata();
    return 0;
}