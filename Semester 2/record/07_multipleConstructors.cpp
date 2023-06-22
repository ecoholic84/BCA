#include <iostream>
// #include <conio.h>
using namespace std;

class Complex
{
    float x;
    float y;

public:
    Complex() {}
    Complex(float a)
    {
        x = y = a;
    }
    Complex(float real, float imag)
    {
        x = real;
        y = imag;
    }
    friend Complex sum(Complex, Complex);
    void show(Complex);
};

Complex sum(Complex c1, Complex c2)
{
    Complex c3;
    c3.x = c1.x + c2.x;
    c3.y = c1.y + c2.y;
    return (c3);
}
void Complex::show(Complex c)
{
    cout << c.x << "i+j" << c.y << endl;
}
int main()
{
    Complex A(2.7, 3.5);
    Complex B(1.6);
    Complex C;
    // clrscr();
    C = sum(A, B);
    cout << "A: ";
    A.show(A);
    cout << "B: ";
    B.show(B);
    cout << "C: ";
    C.show(C);
    // getch();
    return 0;
}