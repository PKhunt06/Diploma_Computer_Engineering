// P-3-A Implement a program to sort an array of 10 elements

#include<iostream>
using namespace std;

int main()
{
    int a[10],i,j;
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

    for(i=0;i<10;i++)
    {
        for(j=i+1;j<10;j++)
        {
            if(a[i]<a[j])
            {
                int tmp=a[i];
                a[i]=a[j];
                a[j]=tmp;
            }
        }
    }
    cout<<"\nElements after sorting in assending order:-\n";
    for(i=0;i<10;i++)
    {
        cout<<a[i]<<"\t";
    }
    return 0;
}
