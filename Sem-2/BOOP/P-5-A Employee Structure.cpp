// P-5-A  Define a structure EMP which include following data members.
// -Emp_no
// -Name of Employee
// -Name of Department
// -Salary
// Which Read and Display all Data from User.

#include<iostream>
using namespace std;

struct EMP
{
    int Emp_no;
    char Emp_Name[25], Emp_Depart[25];
    float Emp_Salary;
}s1,s2;

int main()
{
    cout<<"Enter Emp_no:- ";
    cin>>s1.Emp_no;
    cout<<"Enter name of employee:- ";
    gets(s1.Emp_Name);
    gets(s1.Emp_Name);
    cout<<"Enter department of employee:- ";
    gets(s1.Emp_Depart);
    cout<<"Enter salary of employee:- ";
    cin>>s1.Emp_Salary;
    cout<<"_______________________________________"<<endl;
    cout<<"Emp_no:-\t"<<s1.Emp_no<<endl;
    cout<<"Emp_Name:-\t"<<s1.Emp_Name<<endl;
    cout<<"Emp_Depart:-\t"<<s1.Emp_Depart<<endl;
    cout<<"Emp_Salary:-\t"<<s1.Emp_Salary<<endl;
    return 0;
}
