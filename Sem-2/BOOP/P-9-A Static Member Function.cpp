// P-9-A Implement a program of Static Member Function.

#include <iostream>
using namespace std;

class demo
{ 
    int x;
    static int y;
    public:
        void getdata(int a)
        {
            x=a;
            y++;
        }
        void putdata()
        {
            cout<<"\n x="<<x<<"\n y="<<y;
        }
        static void xyz()
        {
            cout<<"\n y="<<y;
        }
};

int demo::y=10;

int main() 
{
    demo a;
    a.getdata(10);
    a.putdata();
    demo::xyz();
    return 0;
}
