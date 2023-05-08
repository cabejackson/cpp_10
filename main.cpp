#include <iostream>
using namespace std;

int main() {

    //binary operators
    // +, -, *, /, %

    cout << 5 + 2 << endl;
    cout << 5 / 2 << endl; // int
    cout << 5.0 / 2.0 << endl; // double/float
    cout << 5 % 2 << endl; // modulo -- remainder

    //unary operators
    //++, --

    int counter = 7;
    counter++;
    cout << counter << endl;
    counter--;
    cout << counter << endl;

    int counter2 = 3;

    cout << "counter2++: " << counter2++ << endl; //post increment operator
    cout << "counter2++ after: " << counter2 << endl;
    cout << "++counter2: " << ++counter2 << endl; //pre increment operator

    system("clear screen");

    //relational operators
    // <, >, <=, >=, ==, !=

    int a = 5, b = 5;
    cout << (a < b) << endl; // false
    cout << (a <= b) << endl; // true
    cout << (a == b) << endl; // true
    cout << (a != b) << endl; // false

    system("clear screen");

    //logical operators
    // &&, ||, !
    cout << ( a == 5 && b == 15) << endl; //false
    cout << ( a == 5 || b == 15) << endl; //true
    cout << !( a == 5 || b == 15) << endl; //false

    return 0;
}