// P-5-B Define a Class Box which contains Length, Width and Height as data members Function to find volume.

#include <iostream>
using namespace std;

class Box 
{
    private:
        int length, width, height;

    public:
        void inputData()
        {
            cout<<"Enter length= \t\t";
            cin>>length;
            cout<<"Enter width= \t\t";
            cin>>width; 
            cout<<"Enter height= \t\t2";
            cin>>height;
        }
        int opData()
        {
            int volume;
            volume=length*width*height;
            return volume;
            //cout<<"Volume of box= "<<volume;
        }
};

int main() 
{
    Box b;
    b.inputData();
    cout<<"Volume of Box = \t"<<b.opData()<<endl;
    return 0;
}
