/*
Write a program to display details of customer whose account balance is greater than 1000 (array of object)
*/

#include <iostream>
using namespace std;

class customer
{
    char name[25];
    int acc_no;
    public:
    float balance;
    void getdata();
    void putdata();
};

void customer::getdata()
{
    cout<<"Enter Name: ";
    cin>>name;
    cout<<"Enter Account Number: ";
    cin>>acc_no;
    cout<<"Enter Balance: ";
    cin>>balance;
}

void customer::putdata()
{
    cout<<"Name: "<<name<<endl;
    cout<<"Account Number: "<<acc_no<<endl;
    cout<<"Balance: "<<balance<<endl;
}

int main()
{
    
    int n = 0, i;

    cout<<"Enter number of customers: ";
    cin>>n;

    customer c[n];
    
    for(i=0;i<n;i++)
    {
        c[i].getdata();
    }
    for(i=0;i<n;i++)
    {
         if(c[i].balance > 1000)
            {
                c[i].putdata();
            }
    }
    return 0;
}