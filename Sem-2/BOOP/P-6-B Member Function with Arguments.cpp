// P-6-B WAP to add and subtract two numbers by writing member function outside the Class by using Member function with Arguments.

#include<iostream>
using namespace std;

class Art
{
        //int a,b;
    public:
        int a,b;
        void input()
        {
            cout<<"Enter value of A & B:-";
            cin>>a>>b;
        }
        void output(int a, int b);
};

void Art::output(int a,int b)
{
    int add,sub;
    add=a+b;
    sub=a-b;
    cout<<"Value of A:-\t"<<a<<endl;
    cout<<"Value of B:-\t"<<b<<endl;
    cout<<"Addition:-\t"<<add<<endl;
    cout<<"Subtraction:-\t"<<sub<<endl;
}

int main()
{
    Art a;
    a.input();
    a.output(a.a,a.b);
    return 0;
}
