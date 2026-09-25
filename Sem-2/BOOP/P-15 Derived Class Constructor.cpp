// P-15 Develop program to demonstrate derived class constructor.

#include<iostream>
using namespace std;

class Base
{
    protected:
        int a;
    public:
        /*Base() 
        {
            a=0;
        }*/
        Base():a(0)
        {}
        Base(int a1)
        {
            a=a1;
            cout<<"Base Class Constructor called"<<endl;
        }
};
class Derived:public Base
{
    protected:
        int b,sum;
    public:
        Derived():b(0)
        {}
        Derived(int a1,int b1):Base(a1)
        {
            b=b1;
            sum = a + b;
            cout<<"Derived Class Constructor called"<<endl;
        }
        void Display()
        {
            cout<<"In Derived Class:-"<<endl;
            cout<<"Value of A:-\t"<<a<<endl;
            cout<<"Value of B:-\t"<<b<<endl;
            cout<<"Sum:-\t\t"<<sum<<endl;
        }
};
int main()
{
    Derived D(2,5);
    D.Display();
    return 0;
}
