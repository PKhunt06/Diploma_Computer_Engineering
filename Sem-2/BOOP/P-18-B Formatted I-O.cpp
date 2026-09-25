// P-18-B Implement a program to demonstrate formatted I/O.

#include<iostream>
using namespace std;
int main()
{
    float a;
    cout<<"enter the float value:-\t";
    cin>>a;
    cout.precision(3);
    cout.width(5);
    cout<<a<<endl;
    return 0;
   
}
