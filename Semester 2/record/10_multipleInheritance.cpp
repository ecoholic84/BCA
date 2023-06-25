#include <iostream>
using namespace std;

class M
{
protected:
    int m;

public:
    void getm()
    {
        cout << "Enter M: ";
        cin >> m;
    }
};
class N
{
protected:
    int n;

public:
    void getn()
    {
        cout << "Enter N: ";
        cin >> n;
    }
};
class P : public M, public N
{
public:
    void display()
    {
        cout << "M: " << m << endl;
        cout << "N: " << n << endl;
        cout << "M*N: " << m * n << endl;
    }
};
int main()
{
    P p;
    p.getm();
    p.getn();
    p.display();
    return 0;
}