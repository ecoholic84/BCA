#include <iostream>
// #include <conio.h>
using namespace std;

class Complex
{
    float real;
    float img;

public:
    void getdata()
    {
        cout << "Enter real part: ";
        cin >> real;
        cout << "Enter imaginary part: ";
        cin >> img;
    }

    Complex operator+(Complex);
    void display();
};

Complex Complex::operator+(Complex s)
{
    Complex com;
    com.real = real + s.real;
    com.img = img + s.img;
    return com;
}

void Complex::display()
{
    cout << real << "+j" << img << endl;
}

int main()
{
    Complex c1, c2, c3;
    // clrscr();
    cout << "Enter values for complex number 1" << endl;
    c1.getdata();
    cout << "Enter values for complex number 2" << endl;
    c2.getdata();
    c3 = c1 + c2;

    cout << "1 = ";
    c1.display();

    cout << "2 = ";
    c2.display();

    cout << "3 = ";
    c3.display();

    // getch();
    return 0;
}