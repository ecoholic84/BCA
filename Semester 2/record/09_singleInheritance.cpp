#include <iostream>
// #include <conio.h>
using namespace std;

// Base class
class Shape
{
protected:
    int width;
    int height;

public:
    void getWidth()
    {
        cout << "Enter width: ";
        cin >> width;
    }

    void getHeight()
    {
        cout << "Enter height: ";
        cin >> height;
    }
};

// Derived class
class Rectangle : public Shape
{
public:
    int getArea()
    {
        return width * height;
    }
};

int main()
{
    Rectangle rect;
    // clrscr();

    rect.getWidth();
    rect.getHeight();

    int area = rect.getArea();
    cout << "Area of the rectangle: " << area << endl;

    // getch();
    return 0;
}
