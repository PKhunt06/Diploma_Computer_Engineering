// P-1-A WAP to convert the temperature from Fahrenheit to Celsius and Celsius to Fahrenheit.

#include<iostream>
using namespace std;

int main()
{
    float c, f;
    cout<<"Enter temperature in Celcius:- ";
    cin>>c;
    f=(c*9/5)+32;
    cout<<c<<" Celcious = "<<f<<" Fahrenheit";
    cout<<"\n--------------------------------------\n";
    cout<<"Enter temperature in Fahrenheit:- ";
    cin>>f;
    c=(f-32)*(5/9);
    cout<<f<<" Fahrenheit = "<<c<<" Celcious";
    return 0;
}
