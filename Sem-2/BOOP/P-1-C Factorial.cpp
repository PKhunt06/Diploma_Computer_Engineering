// P-1-C mplement a program to find factorial of given number.

#include<iostream>
using namespace std;

int main()
{
    int n, fact=1, i;
    cout<<"Enter the number to calculate Factorial of:- ";
    cin>>n;
    for(i=fact;i<=n;i++)
    {
        fact=fact*i;
    }
    cout<<"Factorial of \""<<n<<"!\" is = "<<fact;
    return 0;
}
