#include <iostream>
using namespace std;

int main() {

    //sequencing, selection, iteration

    // write out all the numbers between 100 - 500 that are divisible by 3 and 5

    int counter = 100;

    while (counter <= 500 && counter >= 100){
        if (counter % 3 == 0 && counter % 5 == 0)
            cout << counter << " is divisible by 3 and 5" << endl;
        counter++;
    }

    return 0;
}