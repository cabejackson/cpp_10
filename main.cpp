#include <iostream>
using namespace std;

bool isPrimeNumber(int num) {
    bool isPrime = true;
        for ( int i = 2; i < num; i++){
        if (num % i == 0) {
            isPrime = false;
            break;
        }
    }
    return isPrime;
}

int main() {

    int num;
    bool isPrime = isPrimeNumber(num);

    cout << "Enter a number: ";
    cin >> num;

    if (isPrime)
        cout << num <<" is a prime number!" << endl;
    else
        cout << num <<" is not a prime number!" << endl;

    return 0;
}
