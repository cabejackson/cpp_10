#include <iostream>
using namespace std;

int main() {
    // int num;

    // cout << "Please enter a whole number: ";
    // cin >> num;

    // if (num % 2 == 0) {
    //     cout << "Your number is even" << endl;
    // }else {
    //     cout << "Your number is odd" << endl; 
    // };
    // cout << "Thanks, bye!";

    //user enters side lengths of a triangle (a, b, c)
    // Program should determine whether the triangle is equilateral, isosceles or scalene
    double a, b, c;
    cout << "Please enter 3 side lengths: ";
    cin >> a >> b >> c;

    if ( a == b && b == c)
        cout << "Your triangle is equilateral!" << endl;
    else {
        if ( a != b && b != c && c != a)
            cout << "Your triangle is scalene!" << endl;
        else
            cout << "Your triangle is isosceles!" << endl;
    }


    return 0;
}