// P-6-A Define a Class Student with Data members Name, Enrollment no, Marks for 3 Subjects and functions to input and output the data and calculate percentage.

#include <iostream>
#include<stdlib.h>
using namespace std;

class Student
{
    private:
        char name[25];
        long double Enr_No,Sub1,Sub2,Sub3;

    public:
        void inputData()
        {
            cout<<"Enter Name of student:- \t\t";
            gets(name);
            cout<<"Enter Enr_No:- \t\t\t\t";
            cin>>Enr_No;
            cout<<"Enter marks for subject 1:- \t\t";
            cin>>Sub1;
            cout<<"Enter marks for subject 2:- \t\t";
            cin>>Sub2;
            cout<<"Enter marks for subject 3:- \t\t";
            cin>>Sub3;
        }
        void opData()
        {
            cout<<"Name:-\t"<<name<<endl;
            cout<<"Enr_No:-\t"<<Enr_No<<endl;
            cout<<"Marks for subject 1:-\t"<<Sub1<<endl;
            cout<<"Marks for subject 2:-\t"<<Sub2<<endl;
            cout<<"Marks for subject 3:-\t"<<Sub3<<endl;
            float percent;
            percent=100*(Sub1+Sub2+Sub3)/300;
            cout<<"Percentage:-\t"<<percent;
        }
};

int main() 
{
    Student s1;
    s1.inputData();
    s1.opData();
    return 0;
}
