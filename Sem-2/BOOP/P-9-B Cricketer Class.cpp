// P-9-B WAP which declares a class cricketer including following members Name,Age,For which Country he plays, type of Cricketer(batsmen,bowler),total No.of 
//  matches he played. The member functions are getdata() and showdata() to enter the data and Display the data for Cricketer.

#include <iostream>
#include <string>
using namespace std;

class Cricket {
private:
    string name;
    int age;
    string country;
    string cricketType;
    int totalMatches;

public:
    // Member function to get data from user
    void getData() {
        cout << "Enter cricketer's name: ";
        getline(cin, name);
        
        cout << "Enter cricketer's age: ";
        cin >> age;
        cin.ignore(); // Ignore newline character
        
        cout << "Enter the country he plays for: ";
        getline(cin, country);
        
        cout << "Enter the type of cricketer (batsman/bowler): ";
        getline(cin, cricketType);
        cout << "Enter total number of matches played: ";
        cin >> totalMatches;
    }

    void showData() {
        cout << "\nCricketer's Information:" << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Country: " << country << endl;
        cout << "Type of Cricketer: " << cricketType << endl;
        cout << "Total Matches Played: " << totalMatches << endl;
    }
};

int main() 
{
    Cricket cricketer;
    cricketer.getData();
    cricketer.showData();
    return 0;
}
