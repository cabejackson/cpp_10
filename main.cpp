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

    
    return 0;
}