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
    //what about nums larger than int?

    // int num, counter = 0;
    // cout << "Enter a number: ";
    // cin >> num;

    // if (num == 0)
    //     cout << "You have entered 0." << endl;
    // else {
    //     if (num < 0) {
    //         num *= -1; //get abs value of num
    //     }
    //     while( num > 0) {
    //         num /= 10;
    //         counter++;
    //     }
    //     cout << "number contains " << counter << " digits." << endl;
    // }

    //reversing number
    //confusing

    // int num, reversedNum = 0, lastDigit;
    // cout << "Please enter a number: ";
    // cin >> num;

    // while (num != 0) {
    //     reversedNum *= 10;
    //     lastDigit = num % 10;
    //     reversedNum += lastDigit;
    //     num /= 10;
    // }

    // cout << "Reversed: " << reversedNum << endl;

    //Pin validation

    int userPin = 1234, pinEntered, errorCounter = 0;

    do {
        cout << "PIN: ";
        cin >> pinEntered;
        if (pinEntered != userPin)
            errorCounter++;
    }while(errorCounter < 3 && pinEntered != userPin);

    if (errorCounter < 3)
        cout << "Loading..." << endl;
    else
        cout << "Blocked..." << endl;

    return 0;
}