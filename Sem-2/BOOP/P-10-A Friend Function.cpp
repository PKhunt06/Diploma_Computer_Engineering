// P-10-A WAP to add Private data of two classes with the use of Friend Function and passing object as an argument.

#include<iostream>
using namespace std;

class AppuKhote;
class Nimral
{
    private:
        int money;
        friend void Princy(Nimral , AppuKhote);
    public:
        void getData()
        {
            cout<<"Enter money Nimral have:-\t";
            cin>>money;
        }
};
class AppuKhote
{
    private:
        int money;
        friend void Princy(Nimral , AppuKhote);
    public:
        void getData()
        {
            cout<<"Enter money AppuKhote have:-\t";
            cin>>money;
        }
};
void Princy(Nimral N1, AppuKhote A1)
{
    cout<<"--------------------------------------"<<endl;
    cout<<"Nimral has:-\t"<<N1.money<<" Rs."<<endl;
    cout<<"AppuKhote Has:-\t"<<A1.money<<" Rs."<<endl;
    cout<<"Princy might get :-\t"<<N1.money+A1.money<<" Rs."<<endl;
}

int main()
{
    Nimral obj1;
    AppuKhote obj2;
    obj1.getData();
    obj2.getData();
    Princy(obj1,obj2);
    return 0;
}
