#include <iostream>
using namespace std;

void Swap( int& a, int& b) { //passing variables by reference
    int temp = a;
    a = b;
    b = temp;
}
//ex of function overloading
void Swap( char& a, char& b) { 
    char temp = a;
    a = b;
    b = temp;
}
int main() {

    //generics - 
        // using the same code w/ dif data types
        //passing the type of params to a function

        int a = 5, b = 7;

        cout << a << " - " << b << endl;
        Swap(a, b);
        cout << a << " - " << b << endl;

        char c = 'c', d = 'd';

        cout << c << " - " << d << endl;
        Swap(c, d);
        cout << c << " - " << d << endl;

    return 0;
}