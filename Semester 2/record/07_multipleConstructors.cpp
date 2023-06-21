#include <iostream>
// #include <conio.h>
using namespace std;
class complex
{
    float x;
    float y;

public:
    complex() {}
    complex(float a)
    {
        x = y = a;
    }
    complex(float real, float imag)
    {
        x = real;
        y = imag;
    }
    friend complex sum(complex, complex);
    void show(complex);
};
complex sum(complex c1, complex c2)
{
    complex c3;
    c3.x = c1.x + c2.x;
    c3.y = c1.y + c2.y;
    return (c3);
}
void complex::show(complex c)
{
    cout << c.x << "i+j" << c.y << endl;
}
int main()
{
    complex A(2.7, 3.5);
    complex B(1.6);
    complex C;
    // clrscr();
    C = sum(A, B);
    cout << "A=";
    A.show(A);
    cout << "B=";
    B.show(B);
    cout << "C=";
    C.show(C);
    // getch();
    return 0;
}