#include <iostream>
using namespace std;

int main() {
    
    //dataTypes
    int yearOfBirth = 1996;
    char sex = 'f';
    bool isOlderThan18 = true;
    float avgGrade = 4.5;
    double balance = 678357902.99;

    cout << "Size of int is " << sizeof(int) << " bytes" << endl;
    cout << "Int min value is " << INT_MIN << endl;
    // -1, -2, -3, ... -2147483648
    cout << "Int min value is " << INT_MAX << endl;
    // 0, 1, 2, 3, ... 2147483647

    cout << "Size of bool is " << sizeof(bool) << " bytes" << endl;
    cout << "Size of char is " << sizeof(char) << " bytes" << endl;
    cout << "Size of float is " << sizeof(float) << " bytes" << endl;
    cout << "Size of double is " << sizeof(double) << " bytes" << endl;

    return 0;
}