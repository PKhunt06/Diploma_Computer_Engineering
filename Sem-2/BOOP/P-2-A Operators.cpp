// P-2-A Implement a program using logical, relational and arithmetic operator.

#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int b = 10;
    int c = 20;

    // Arithmetic operations
    cout << "Arithmetic operations:"<< endl;
    cout << "Addition: " << a+b << endl;
    cout << "Difference: " << a-b << endl;
    cout << "Multiplication: " << a*b << endl;
    cout << "Division: " << a/b << endl;

    // Relational operations
    cout << "\nRelational operations:" << endl;
    cout << "a < b: " << (a < b) << endl;
    cout << "a > b: " << (a > b) << endl;
    cout << "a == b: " << (a == b) << endl;
    cout << "a != b: " << (a != b) << endl;

    // Logical operationsx
    bool condition1 = (a > b) && (b > c);
    bool condition2 = (a < b) || (b < c);
    bool condition3 = !(a == b);

    cout << "\nLogical operations:" << endl;
    cout << "Condition 1: " << condition1 << endl;
    cout << "Condition 2: " << condition2 << endl;
    cout << "Condition 3: " << condition3 << endl;

    return 0;
}
