#include <iostream>
using namespace std;

int main() {
    //note/questions:
    // pointers and variables need to be of the same type
    // why would you want to dereference a pointer?


    int n = 5; //a variable
    cout << "Variable: " << n << endl;
    //how do we check the address of n
    cout << "Address of 'n' variable: " << &n << endl;

    int* ptr = &n;
    cout << "Address of 'n' variable: " << ptr << endl;

    //dereferencing pointers
    cout << "Variable: " << *ptr << endl; //outputs value at that location
    //reassigning value at pointer location
    *ptr = 10;
    cout << "New Value: " << *ptr << endl; //outputs value at that location
    cout << "Variable: " << n << endl;

    int v;
    int* ptr2 = &v;
    *ptr2 = 7;
    cout << "v= " << v << endl;


    return 0;
}