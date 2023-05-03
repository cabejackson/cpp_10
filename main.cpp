#include <iostream>
using namespace std;

int main() {

    //ASCII Table
    //Ea. char is represented by a number

    // //getting a num from a char
    // cout << (int)'a' << endl;
    // cout << int('a') << endl;

    // cout << int('A') << endl;

    // //getting a char from a num
    // cout << char(65) << endl;

    char c1, c2, c3, c4, c5;
    cout << "Enter 5 letters: "; 
    cin >> c1 >> c2 >> c3 >> c4 >> c5;
    cout << "ASCII message: " << int(c1) << " " << int(c2) << " " << int(c3) << " " << int(c4) << " " << int(c5) << endl;



    return 0;
}