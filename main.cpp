#include <iostream>
#include <cmath>
using namespace std;

int main() {

    //sequencing, selection, iteration

    // write out all the numbers between 100 - 500 that are divisible by 3 and 5

    // int counter = 100;

    // while (counter <= 500 && counter >= 100){
    //     if (counter % 3 == 0 && counter % 5 == 0)
    //         cout << counter << " is divisible by 3 and 5" << endl;
    //     counter++;
    // };

    //count digits of a number

    int num, counter = 0;
    cout << "Enter a number: ";
    cin >> num;

    if (num == 0)
        cout << "You have entered 0." << endl;
    else {
        if (num < 0) {
            num *= -1; //get abs value of num
        }
        while( num > 0) {
            num /= 10;
            counter++;
        }
        cout << "number contains " << counter << " digits." << endl;
    }

    return 0;
}