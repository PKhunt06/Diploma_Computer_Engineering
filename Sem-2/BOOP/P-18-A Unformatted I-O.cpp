// P-18-A Implement a program to demonstrate unformatted I/O.

#include <iostream>
#include<string.h>
using namespace std;

int main()
{
       char line[25];
       cout<<"Enter the data:-\t";
       cin.getline(line,21);
       cout.write(line,5);
       cout<<endl;
       cout.write(line,21);
       cout<<endl;
       return 0;
       
}
