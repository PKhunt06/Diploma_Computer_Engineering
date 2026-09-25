// P-13-B Develop a program using multilevel Inheritance.
//  A -> B -> C

//Program to show use of multi level inhertance

#include<iostream>
using namespace std;

class base
{
    protected:
        int a;
    public:
        base()
        {
            a=0;
        }
        base(int a1)
        {
            a=a1;
        }
        void display()
        {
            cout<<"A = "<<a<<endl;
        }
};
class derived1:public base
{
    protected:
        int b;
    public:
        derived1()
        {
            b=0;
        }
        derived1(int a1, int b1):base(a1)
        {
            b=b1;
        }
        void display()
        {
            cout<<"A = "<<a<<" B = "<<b<<endl;
        }
};
class derived2:public derived1
{
    protected:
        int c;
    public:
        derived2()
        {
            c=0;
        }
        derived2(int a1, int b1, int c1):derived1(a1,b1)
        {
            c=c1;
        }
        void display()
        {
            cout<<"A = "<<a<<" B = "<<b<<" C = "<<c<<endl;
        }
};
int main()
{
    base a1(10);
    a1.display();
    derived1 b1(20,30);
    b1.display();
    derived2 c1(40,50,60);
    c1.display();
    return 0;
}
