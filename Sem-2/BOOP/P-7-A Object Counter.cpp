// P-7-A Create a Class objCount that Count the number of Objects which are created for the Class. 

#include <iostream>
using namespace std;

class ObjectCounter {
private:
    static int count; // Static member variable to count objects

public:
    ObjectCounter() {
        count++;
    }

    ~ObjectCounter() {
        count--;
    }

    static int getCount() {
        return count;
    }
};

// Initialize the static member variable
int ObjectCounter::count = 0;

int main() {
    ObjectCounter obj1;
    ObjectCounter obj2;
    ObjectCounter *obj3=new ObjectCounter;

    cout<<"Number of objects created: "<<obj1.getCount()<<endl;

    delete obj3;
    cout<<"Number of objects created: "<<ObjectCounter::getCount()<<endl;
    return 0;
}
