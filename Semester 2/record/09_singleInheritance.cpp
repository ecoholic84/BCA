#include <iostream>
using namespace std;

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

    rect.getWidth();
    rect.getHeight();

    int area = rect.getArea();
    cout << "Area of the rectangle: " << area << endl;

    return 0;
}
