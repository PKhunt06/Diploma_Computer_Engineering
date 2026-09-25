// P-12-B WAP which demonstrate Multiple Constructors or Constructor Overloading.

//Program to demonstrate Multiple Constructors or Constructor Overloading.

#include <iostream>
using namespace std;

class construct
{
    public:
        float area;

        construct()     //Default constructor
        {
            area=0;
        }

        construct(int a, int b)     //Parameterized constructor
        {
            area=a*b;
        }

        // Method to display the area
        void disp()
        {
            cout << "Area: " << area << endl;
        }
};

int main()
{
    int length, width;

    cout<<"Enter length:-\t";
    cin>>length;
    cout<<"Enter width:-\t";
    cin>>width;

    construct o;                 //Default constructor called
    o.disp();  //Displaying area (initialized to 0)

    construct o2(length, width); //Parameterized constructor called
    o2.disp(); //Displaying area (calculated from parameters)
    return 0;
}
