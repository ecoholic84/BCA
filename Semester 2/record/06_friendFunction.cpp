/*
Find mean of numbers using friend function.
*/

#include <iostream>
// #include <conio.h>
using namespace std;

class Sample
{
    int a,b;
    public:
    void setvalue()
    {
        cout<<"Enter the first number: ";
        cin>>a;
        cout<<"Enter the second number: ";
        cin>>b;
    }
    friend float mean(Sample s);
};
float mean(Sample s)
{
    return float(s.a + s.b)/2;
}

int main()
{
    Sample x;
    // clrscr();
    x.setvalue();
    cout<<"Mean: "<<mean(x)<<"\n";
    // getch();
    return 0;
}