// P-12-A Develop a program using Constructor.  WAP which demonstrate basic Constructor.

// defining the constructor within the class

#include <iostream>
using namespace std;

class student 
{
	int rno;
	char name[50];
	double fee;

    public:
	    student()       // constructor
        {
		    cout<<"Enter the RollNo:-\t";
		    cin>>rno;
		    cout<<"Enter the Name:-\t";
		    cin>>name;
		    cout<<"Enter the Fee:-\t\t";
		    cin>>fee;
	    }

	    void display()
	    {
	    	cout<<"Roll No:-\t"<<rno<<endl;
            cout<<"Name:-\t\t"<<name<<endl;
            cout<<"Fee:-\t\t"<<fee<<endl;
	    }
};

int main()
{
	student s;  // constructor gets called automatically when
			    // we create the object of the class
	s.display();
	return 0;
}
