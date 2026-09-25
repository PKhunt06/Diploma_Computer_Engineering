// P-4-C Implement a program to find area of circle using Function with constant default argument PI=3.14

#include<iostream>
using namespace std;
const float PI=3.14;

int area(float r)
{
    return(PI*r*r);
}

int main()
{
    float r,tmp;
    cout<<"Enter radius of circle:-";
    cin>>r;
    cout<<"Area of circle with radius \""<<r<<"\" is:-\t\""<<area(r)<<"\""<<endl;
}
