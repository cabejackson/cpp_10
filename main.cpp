#include <iostream>
using namespace std;

//sum nums between m and n
int main() {

    int m = 2, n = 4;
    //TODO: ask user to enter the nums and check for which one is smaller/larger

    int sum = 0;
    for(int i = m; i <= n; i++) {
        sum += i;
    }
    cout << "Sum is equal to " << sum << endl;



    return 0;
}
