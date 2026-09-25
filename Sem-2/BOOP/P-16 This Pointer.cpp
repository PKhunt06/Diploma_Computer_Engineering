// P-16 Develop a program to show the use of this pointer.

#include<iostream>
using namespace std;

class A
{
    private:
        int a;
    public:
        /*A(int a)
        {
            //a=a;
            this->a=a;
        }*/
        void getdata(int a)
        {
            //a=a;
            this->a=a;
        }
        void display()
        {
            cout<<"Value of A:-\t"<<a<<endl;
        }
};

int main()
{
    int n;
    cout<<"Enter n:-\t";
    cin>>n;
    //A a(n);
    //a.display();
    A a;
    a.getdata(n);
    a.display();
    return 0;
}
