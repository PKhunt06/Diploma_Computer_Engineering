// P-12-D WAP which demonstrate destructor.

#include <iostream>
using namespace std;
class Kemcho
{
    public:
  
        Kemcho()    //Constructor
        {
            cout<<"Constructor is called"<<endl;
        }
  
        ~Kemcho()   //Destructor
        {
            cout<<"Destructor is called"<<endl;
        }
   
        void display()      //Member function
        {
            cout<<"Kem cho Baddha!"<<endl;
        }
};
int main()
{
   Kemcho K;      //Object created
   K.display();       //Member function called
   return 0;
}
