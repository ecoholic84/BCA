/*
Define a class STUDENT with attributes Roll No and Name.
Derive a class called MARKS from STUDENT class.
MARKS includes additional details such as Marks in 3 subjects, Total marks and Percentage of marks.
Use necessary member functions for both the classes to read and compute total marks and percentage.
Write a C++ program to implement the above concept. Use appropriate form of inheritance
*/

#include <iostream>
using namespace std;

// Define a base class STUDENT
class STUDENT
{
protected:
    int rlNo; // Roll number
    char name[50]; // Name of the student

public:
    // Method to get student details from the user
    void getDetails()
    {
        cout << "Enter Roll No: ";
        cin >> rlNo;
        cout << "Enter Name: ";
        cin >> name;
    }

    // Method to display student details
    void displayDetails()
    {
        cout << "Roll No: " << rlNo << endl;
        cout << "Name: " << name << endl;
    }
};

// Define a derived class MARKS that inherits from STUDENT
class MARKS : public STUDENT
{
private:
    int Marks[3]; // Array to store marks of 3 subjects
    int TotalMarks; // Total marks obtained
    float Percentage; // Percentage of marks obtained

public:
    // Method to get marks in each subject from the user
    void getMarks()
    {
        for (int i = 0; i < 3; i++)
        {
            cout << "Enter Marks in Subject " << i + 1 << ": ";
            cin >> Marks[i];
        }
    }

    // Method to calculate total marks and percentage
    void calculate()
    {
        TotalMarks = Marks[0] + Marks[1] + Marks[2];
        Percentage = static_cast<float>(TotalMarks) / 3.0;
    }

    // Method to display student details along with marks
    void displayStudentWithMarks()
    {
        displayDetails();
        cout << "Marks in Subject 1: " << Marks[0] << endl;
        cout << "Marks in Subject 2: " << Marks[1] << endl;
        cout << "Marks in Subject 3: " << Marks[2] << endl;
        cout << "Total Marks: " << TotalMarks << endl;
        cout << "Percentage: " << Percentage << "%" << endl;
    }
};

// Main function
int main()
{
    MARKS studentWithMarks; // Create an object of class MARKS

    studentWithMarks.getDetails(); // Get student details from the user
    studentWithMarks.getMarks(); // Get marks in each subject
    studentWithMarks.calculate(); // Calculate total marks and percentage

    cout << "\nStudent Details with Marks:\n";
    studentWithMarks.displayStudentWithMarks(); // Display student details along with marks

    return 0;
}