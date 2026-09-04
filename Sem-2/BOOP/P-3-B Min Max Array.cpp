// P-3-B Implement a program to find out minimum and maximum from array of 10 elements

#include<iostream>
using namespace std;

int main()
{
    int a[10],i,k=0;
    cout<<"Enter elements of array:-\n";
    for(i=0;i<10;i++)
    {
        cin>>a[i];
    }
    cout<<"\nElements in Array is as followed:-\n";
    for(i=0;i<10;i++)
    {
        cout<<a[i]<<"\t";
    }
    k=a[0];
    for(i=0;i<10;i++)
    {
        if(a[i]<k)
        {
            k=a[i];
        }
    }
    cout<<"\n\nMinimum number from the list of array is :-\t"<<k<<endl;
    for(i=0;i<10;i++)
    {
        if(a[i]>k)
        {
            k=a[i];
        }
    }
    cout<<"\nMaximum number from the list of array is :-\t"<<k<<endl;
    return 0;
}
