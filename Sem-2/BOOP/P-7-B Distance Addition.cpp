// P-7-B Write a program which creates a class Distance and add two different distances input from the User.

#include<iostream>
#include<cmath>
using namespace std;

class Dist
{
        int feet;
        float inches;

    public:
        void getDist()
        {
            cout<<"Enter Distance (feet inches):-\t";
            cin>>feet>>inches;
        }
        void putDist()
        {
            cout<<"feet = "<<feet<<" inches = "<<inches<<endl;
        }
        Dist addDist( Dist d1,  Dist d2)
        {
            Dist result;
            result.feet = d1.feet + d2.feet;
            result.inches = d1.inches + d2.inches;

            if(result.inches>=12)
            {
                result.feet += static_cast<int>(result.inches/12);
                result.inches = fmod(result.inches,12);
            }
            return result; 
        }
};

int main()
{
    Dist d1,d2;
    d1.getDist();
    d2.getDist();
    Dist sum = d1.addDist(d1,d2);
    cout<<"\nSum of distances:-"<<endl;
    sum.putDist();
    return 0;
}
