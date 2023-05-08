#include <iostream>
#include <cmath>
using namespace std;

int main() {

    //program for swapping values of two variables
    //using a third variable

    // int a = 20;
    // int b = 10;

    // cout << "a = " << a << " and b = " << b << endl; // a = 20 and b = 10

    // int temp = a; //temporary variable that holds the value of a
    // a = b;
    // b = temp;

    // cout << "a = " << a << " and b = " << b << endl; // a = 10 and b = 20
    
    //program for swapping values of two variables
    //without using a third variable

    int a = 20;
    int b = 10;

    cout << "a = " << a << " and b = " << b << endl; // a = 20 and b = 10

    a = a + b; //30
    b = a - b; //20
    a = abs(b - a); //10
    //a = a - b //10 //another solution

    cout << "a = " << a << " and b = " << b << endl; // a = 10 and b = 20

    return 0;
}