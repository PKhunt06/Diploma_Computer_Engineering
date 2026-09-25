// P-4-B Implement a program to find area of Square Rectangle and triangle using concept of function overloading.

#include<iostream>
using namespace std;

int area(int );         //area of Squre.
int area(int ,int );    //area of Rectangle.
float area(float ,float);   //area of Triangle.

int main()
{
    int l,b,h;
    cout<<"Enter length of any side of squre:-";
    cin>>l;
    cout<<"Area of Squre having Length of one side \""<<l<<"\" is:-\t"<<area(l)<<endl;
    cout<<"Enter length and breadth of Retangle:-";
    cin>>l>>b;
    cout<<"Area of Rectangle having Length \""<<l<<"\" & Breadth \""<<b<<"\" is:-\t"<<area(l,b)<<endl;
    float B,H;
    cout<<"Enter length and height of Triangle:-";
    cin>>B>>H;
    cout<<"Area of Rectangle having Length \""<<B<<"\" & Height \""<<H<<"\" is:-\t"<<area(B,H)<<endl;
}

int area(int s)
{
    return(s*s);
}

inline int area(int l,int b)
{
    return(l*b);
}

float area(float l,float h)
{
    return((l*h)/2);
}
