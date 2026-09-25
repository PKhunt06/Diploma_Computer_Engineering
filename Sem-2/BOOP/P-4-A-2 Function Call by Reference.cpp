// P-4-A-2  Implement a program using Function
// - Function call by reference.

#include<iostream>
using namespace std;

int swap(int *,int *);

int main()
{
    int a,b;
    cout<<"Enter value of A & B:- \t";
    cin>>a>>b;
    swap(&a,&b);      //function called using call by reference method...
    cout<<"\nValue of A nd B in main() Function:-\n";
    cout<<"A = "<<a<<"\tB = "<<b<<endl;
    return 0;
}

int swap(int *x,int *y)
{
    int tmp=*x;
    *x=*y;
    *y=tmp;
    cout<<"\n\nValue of A & B in Swap() Function:-\n";
    cout<<"A = "<<*x<<"\tB = "<<*y<<endl;
    return 0;
}
