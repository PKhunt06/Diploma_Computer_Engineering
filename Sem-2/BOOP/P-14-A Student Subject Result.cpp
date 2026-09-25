// P-14-A Write a program to create a Class STUDENT, SUB, and RESULT for multilevel inheritance to read the marks and Display final Result.

#include <iostream>
using namespace std;

class Student       //Base class
{
    protected:
        int roll_number;
        string name;
    public:
        void getStudentInfo() 
        {
            cout<< "Enter Roll Number: ";
            cin>>roll_number;
            cout<< "Enter Name: ";
            cin>>name;
        }
};

class Subject:public Student        // Derived class
{
    protected:
        int marks[3];
    public:
        void getSubjectMarks() 
        {
            getStudentInfo(); // Calling base class function
            cout << "Enter marks for 3 subjects: ";
            for(int i = 0; i < 3; i++) 
            {
                cin >> marks[i];
            }
        }
};

class Result : public Subject   // Derived class
{
    public:
        void displayResult() 
        {
            int total_marks = 0;
            float per;
            for(int i = 0; i < 3; i++) 
            {
                total_marks += marks[i];    
            }
            per=total_marks/3;
            cout << "Roll Number: " << roll_number << endl;
            cout << "Name: " << name << endl;
            cout << "Total Marks: " << total_marks << endl;
            cout << "Percentage: " << per << "%"<<endl;
        }
};

int main() 
{
    Result obj;
    obj.getSubjectMarks();
    obj.displayResult();
    return 0;
}
