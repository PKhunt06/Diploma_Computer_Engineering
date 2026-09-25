// Extra-P-2 Develop a C++ program using hierarchical inheritance.

#include <iostream>
#include <string>
using namespace std;

// Base class Person
class Person 
{
    protected:
        string name;
        int age;

    public:
        Person(const string n, int a) : name(n), age(a) {}

        void display() const 
        {
            cout<<"Name:- "<<name<<" , Age:- "<<age;
        }
};

// Derived class Student inheriting from Person
class Student : public Person 
{
    private:
        int studentId;

    public:
        Student(const string n, int a, int id) : Person(n, a), studentId(id) {}

        void displayStudent() const 
        {
            display(); // Access base class display function
            cout<<" , Student ID:- "<<studentId<<endl;
        }
};

// Derived class Teacher inheriting from Person
class Teacher : public Person 
{
    private:
        string subject;

    public:
        Teacher(const string n, int a, const string subj) : Person(n, a), subject(subj) {}

        void displayTeacher() const 
        {
            display(); // Access base class display function
            cout<<" , Subject:- "<<subject<<endl;
        }
};

int main() 
{
    // Creating objects of derived classes
    Student student("Ahir", 20, 1001);
    Teacher teacher("Mr. Ahir", 30, "BOOP");

    // Calling member functions of derived classes
    cout<<"Student:-\t";
    student.displayStudent();

    cout<<"Teacher:-\t";
    teacher.displayTeacher();

    return 0;
}
