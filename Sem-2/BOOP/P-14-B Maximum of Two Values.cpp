// P-14-B  Implement program to find maximum from two values using following diagram.Function:max()
//  A           B
//  |->   C   <-| 

#include<iostream>
using namespace std;

class A 
{
    protected:
        int x;
    public:
        A() 
        {
            x = 0;
        }

        void getdata() 
        {
            cout << "Enter X:-\t";
            cin >> x;
        }

        void display() 
        {
            cout << "X = " << x << endl;
        }
};

class B 
{
    protected:
        int y;
    public:
        B() 
        {
            y = 0;
        }

        void getdata() 
        {
            cout << "Enter Y:-\t";
            cin >> y;
        }

        void display() 
        {
            cout << "Y = " << y << endl;
        }
};

class C: public A, public B 
{
    public:
        // Function to find the maximum value between x and y
        void Max() 
        {
            if (x > y) 
            {
                cout << "X is Max" << endl;
            }    
            else if (y > x) 
            {
                cout << "Y is Max" << endl;
            } 
            else 
            {
                cout << "Both are equal" << endl;
            }
        }

        // Separate initialization for members of class C
        void getdata() 
        {
            A::getdata();
            B::getdata();
        }

        // Separate display for members of class C
        void display() 
        {
            A::display();
            B::display();
        }
};

int main() 
{
    C c;
    c.getdata();
    c.display();
    c.Max();
    return 0;
}
