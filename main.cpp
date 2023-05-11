#include <iostream>
using namespace std;

bool isPrimeNumber(int num) {
    for (int i = 2; i < num; i++){
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}


int main() {

    for (int i = 1; i <= 100000; i++) {
        bool isPrime = isPrimeNumber(i);
        //TODO: Add a counter for how many prime numbers there are w/in the range
        if (isPrime)
            cout << i <<" is a prime number!" << endl;
    }
    return 0;
}
