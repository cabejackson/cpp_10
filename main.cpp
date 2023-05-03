#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Please enter a whole number: ";
    cin >> num;

    if (num % 2 == 0) {
        cout << "Your number is even" << endl;
    }else {
        cout << "Your number is odd" << endl; 
    };
    cout << "Thanks, bye!";

    return 0;
}