// P-10-B Create a Class Time that displays the Time in hour and Minute form. Create a method total time() which takes 
//  two time Objects as an argument and Return a new Object of time Displaying total of both time objects

#include<iostream>
#include<cmath>
using namespace std;

class Time
{
        int Hrs,Min;

    public:
        void getTime()
        {
            cout<<"Enter Time (Hrs Min):-\t";
            cin>>Hrs>>Min;
        }
        void putTime()
        {
            cout<<"Hrs = "<<Hrs<<" Min = "<<Min<<endl;
        }
        Time addTime(Time t1,  Time t2)
        {
            Time result;
            result.Hrs = t1.Hrs + t2.Hrs;
            result.Min = t1.Min + t2.Min;

            if(result.Min>=60)
            {
                result.Hrs += result.Min/60;
                result.Min = result.Min%60;
            }
            return result; 
        }
};

int main()
{
    Time t1,t2;
    t1.getTime();
    t2.getTime();
    Time sum = t1.addTime(t1,t2);
    cout<<"\nAddition of Times:-"<<endl;
    sum.putTime();
    return 0;
}
