#include <iostream>
using namespace std;

// Base class
class Shape
{
protected:
    int w;
    int h;

public:
    void getWidth(int width)
    {
        cout<<"Enter width: ";
        cin>>width;
        w = width;
    }

    void getHeight(int height)
    {
        cout<<"Enter hieght: ";
        cin>>height;
        h = height;
    }
};

// Derived class
class Rectangle : public Shape
{
public:
    int getArea()
    {
        return w * h;
    }
};

int main()
{
    Rectangle rect;

    rect.getWidth();
    rect.getHeight();

    int area = rect.getArea();
    cout << "Area of the rectangle: " << area << endl;

    return 0;
}
