// P-1-D Implement a program to print reverse of given number

#include<iostream>
using namespace std;

int main()
{
    int n, r, org, rev=0;
    cout<<"Enter any number:- ";
    cin>>n;
    org=n;
    while(n!=0)
    {
        r=n%10;
        rev=(rev*10)+r;
        n=n/10;
    }
    cout<<"\nOriginal number was:- "<<org;
    cout<<"\nReverse of given number is:- "<<rev<<"\n"<<endl;
    return 0;
}
