// Extra-P-1 Develop a program using compile time (operator overloading) polymorphism.

#include <iostream>
using namespace std;

// Function to add two integers
int add(int a, int b) 
{
    return a + b;
}

// Function to add three integers
int add(int a, int b, int c) 
{
    return a + b + c;
}

// Function to concatenate two strings
string add(const string s1, const string s2) 
{
    return s1 + s2;
}

int main() 
{
    int a,b,c;
    cout<<"Enter value of a:-\t";
    cin>>a;
    cout<<"Enter value of b:-\t";
    cin>>b;
    cout<<"Enter value of c:-\t";
    cin>>c;

    string s1,s2;
    cout<<"Enter string 1:-\t";
    getline(cin,s1);
    getline(cin,s1);
    cout<<"Enter string 2:-\t";
    getline(cin,s2);

    // Calling the function add(int, int)
    cout<<"\nSum of a and b:-\t"<<add(a, b)<<endl;

    // Calling the function add(int, int, int)
    cout<<"\nSum of a, b, and c:-\t" <<add(a, b, c)<<endl;

    // Calling the function add(string, string)
    string result = add(s1, s2);
    cout<<"\nConcatenated string:-\t"<<result<<endl;

    return 0;
}
