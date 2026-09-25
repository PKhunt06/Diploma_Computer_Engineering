// P-11-B Implement a Program of inline Function.

#include<iostream>
using namespace std;

class Qube
{
        int n;
    public:
        void getNum()
        {
            cout<<"Enter any Number to find Cube:-\t\t";
            cin>>n;
        }
        void Show()
        {
            cout<<"Cube of \""<<n<<"\":-\t\t\t\t"<<Cube(n)<<endl;
        }
        int Cube(int n);
};

inline int Qube::Cube(int n)
{
    return (n*n*n);
}

int main()
{
    Qube Q1;
    Q1.getNum();
    Q1.Show();
    return 0;
}
