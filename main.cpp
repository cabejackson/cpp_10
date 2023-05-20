#include <iostream>
using namespace std;


int main() {
    // int luckyNumbers[5] = { 2, 3, 5, 7, 9 };

    // cout << luckyNumbers << endl; // the address of the first element of the array is printed
    // cout << &luckyNumbers[0] << endl;
    // cout << "Value: "<< luckyNumbers[2] << endl;
    // cout << "Value: "<< *(luckyNumbers + 2) << endl; //dereferencing
    // cout << "Address of luckyNumbers[2]: " << &luckyNumbers[2] << endl;

    //how to enter values via an array
    int luckyNumbers[5]; 

    for(int i = 0; i <= 4; i++) {
        cout << "Number: ";
        cin >> luckyNumbers[i];
    }

    for (int i = 0; i <= 4; i++) {
        cout << *(luckyNumbers+i) << " ";
    }

    return 0;
}