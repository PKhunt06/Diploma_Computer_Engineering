// P-12-C WAP which demonstrate Copy of constructor

#include <iostream>  
using namespace std;  

class A  
{  
   public:  
        int x;  
        A(int a)                // parameterized constructor.  
        {  
            x=a;  
        }  
        A(A &i)               // copy constructor  
        {  
            x = i.x;  
        }  
};  
int main()  
{  
    A a1(20);               // Calling the parameterized constructor.  
    cout<<a1.x<<endl;
    A a2(a1);                //  Calling the copy constructor.  
    cout<<a2.x<<endl;  
    return 0;  
}  
