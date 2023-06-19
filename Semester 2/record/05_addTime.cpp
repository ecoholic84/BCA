/*
Program to perform addition of time by passing objects as arguments.
*/

#include <iostream>
using namespace std;

class Time
{
    int hr, min;
    public:
    void getTime()
    {
        cout<<"Enter hours: ";
        cin>>hr;
        cout<<"Enter minutes: ";
        cin>>min;
    }
    void putTime()
    {
        cout<<"Hours: "<<hr<<endl;
        cout<<"Minutes: "<<min<<endl;
    }

    void sum(Time, Time);
};

void Time::sum(Time t1, Time t2)
{
    min = t1.min + t2.min;
    hr = min/60;
    min = min%60;
    hr = hr + t1.hr + t2.hr;
}

int main()
{
    Time t1, t2, t3;
    cout<<"Time 1: "<<endl;
    t1.getTime();
    cout<<"Time 2: "<<endl;
    t2.getTime();
    t3.sum(t1, t2);
    cout<<"\nSum: "<<endl;
    t3.putTime();
    return 0;
}