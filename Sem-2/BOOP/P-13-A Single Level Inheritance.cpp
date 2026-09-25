// P-13-A Develop a program using single level Inheritance.
//  A -> B

#include<iostream>
using namespace std;

class circle            //base class
{
    private:
        float a;
    public:
        int r;
        void getdata()
        {
            cout<<"Enter radius:-\t";
            cin>>r;
        }
        void area()
        {
            a=3.14*r*r;
            cout<<"Area =\t"<<a<<endl;
        }
};
class circle_ext:public circle          //derived class
{
    protected:
        float p;
    public:
        void peri()
        {
            p=2*3.14*r;
            cout<<"Peripheral = \t"<<p<<endl;
        }
};
int main()
{
    circle c1;      //object of base class
    c1.getdata();
    c1.area();
    circle_ext c2;  //object of derived class
    c2.getdata();
    c2.area();
    c2.peri();
    return 0;
}
