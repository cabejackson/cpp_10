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

    int num;
    cout << "Enter a number: ";
    cin >> num;

    bool isPrime = isPrimeNumber(num);

    if (isPrime)
        cout << num <<" is a prime number!" << endl;
    else
        cout << num <<" is not a prime number!" << endl;

    return 0;
}
