// P-2-B Implement a program using scope resolution operator and manipulator

#include <iostream> 
#include <iomanip>
using namespace std;  
int a=10;
enum week { Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday};  
int main()  
{  
    int a=20;
    cout<<a<<endl;
    cout<<::a<<endl;
    week day;  
    day = Friday; 
    cout << setw(10)<<setfill('*')<<left;
    cout << "Day: " << day<<endl;
    return 0;  
}  
