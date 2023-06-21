#include <iostream>
// #include <conio.h>
using namespace std;

class Complex
{
    float real;
    float imaginary;

public:
    void input();
    Complex sum(Complex);
    void show();
};

void Complex::input()
{
    cout << "Enter real part: ";
    cin >> real;
    cout << "Enter imaginary part: ";
    cin >> imaginary;
}

Complex Complex::sum(Complex c)
{
    Complex result;
    result.real = real + c.real;
    result.imaginary = imaginary + c.imaginary;
    return result;
}

void Complex::show()
{
    cout << real << " + j" << imaginary << endl;
}

int main()
{
    Complex A, B, C;
    // clrscr();

    cout << "Enter values for Complex A:" << endl;
    A.input();

    cout << "\nEnter values for Complex B:" << endl;
    B.input();

    C = A.sum(B);

    cout << "\nSum of Complex numbers:" << endl;
    cout << "A = ";
    A.show();

    cout << "B = ";
    B.show();

    cout << "C = ";
    C.show();
    // getch();
    return 0;
}
