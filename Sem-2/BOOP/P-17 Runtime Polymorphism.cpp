// P-17 Develop a program using runtime polymorphism.

#include<iostream>
using namespace std;

class Base 
{
    public:
        virtual void display()      // virtual function
        {
            cout << "Base class \"Virtual Function\" is called with Function name Display()"<<endl;
        }

        void print()
        {
            cout << "Base class \"Print Function\" is called"<<endl;
        }
};

class Child:public Base     // Declaring a Child Class
{
    public:
        void display()
        {
            cout << "Child Class \"Display Function\" is called"<<endl;
        }
        void print()
        {
            cout << "Child Class \"Print Function\" is called"<<endl;
        }
};

int main()
{
    Base* obj1;     // Create a reference of class Base
    Child obj2;
    obj1 = &obj2;
    obj1->Base::display();  // This will call the virtual function
    obj1->display();
    obj1->print();          // This will call the non-virtual function
    obj2.print();
    return 0;
}
