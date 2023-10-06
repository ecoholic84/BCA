/*
Write a C++ program to find the areas of a Rectangle (length * width), Circle (3.14 * radius^2) and 
Triangle (given three sides a, b and c, area=sqrt(s(s-a)*(s-b)*(s-c)), where s=(a+b+c)/2) using the concepts of Class and Function Overloading. 
*/

#include <iostream>
#include <math.h> // For sqrt()

using namespace std;

class AreaCalculator
{
public:
    // Function to calculate the area of a Rectangle
    double calculateArea(double length, double width)
    {
        return length * width;
    }

    // Function to calculate the area of a Circle
    double calculateArea(double radius)
    {
        return 3.14 * radius * radius;
    }

    // Function to calculate the area of a Triangle using Heron's formula
    double calculateArea(double a, double b, double c)
    {
        double s = (a + b + c) / 2;
        return sqrt(s * (s - a) * (s - b) * (s - c));
    }
};

int main()
{
    AreaCalculator calculator;

    // Calculate and display the area of a Rectangle
    double length, width;
    cout << "Enter the length of the Rectangle: ";
    cin >> length;
    cout << "Enter the width of the Rectangle: ";
    cin >> width;
    double rectangleArea = calculator.calculateArea(length, width);
    cout << "Area of the Rectangle: " << rectangleArea << endl;

    // Calculate and display the area of a Circle
    double radius;
    cout << "Enter the radius of the Circle: ";
    cin >> radius;
    double circleArea = calculator.calculateArea(radius);
    cout << "Area of the Circle: " << circleArea << endl;

    // Calculate and display the area of a Triangle
    double sideA, sideB, sideC;
    cout << "Enter the lengths of the three sides of the Triangle: ";
    cin >> sideA >> sideB >> sideC;
    double triangleArea = calculator.calculateArea(sideA, sideB, sideC);
    cout << "Area of the Triangle: " << triangleArea << endl;

    return 0;
}
