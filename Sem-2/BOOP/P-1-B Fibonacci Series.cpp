// P-1-B Implement a program to print Fibonacci series.

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter a number:- ";
    cin>>n;
    int a1=0, a2=1, a3, i;
    cout<<a1<<"\t"<<a2;
    for(i=3;i<=n;i++)
    {
        a3=a1+a2;
        cout<<"\t"<<a3;
        a1=a2;
        a2=a3;
    }
    return 0;
}
