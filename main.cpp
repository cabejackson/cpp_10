#include <iostream>
using namespace std;

int recursiveSum( int m, int n){ // m=4, n=4
    if (m == n) //base case
        return m;
    return m + recursiveSum(m+1, n);// 9
}

//sum nums between m and n
int main() {

    int m = 2, n = 4;
    //TODO: ask user to enter the nums and check for which one is smaller/larger

    // int sum = 0;
    // for(int i = m; i <= n; i++) {
    //     sum += i;
    // }
    // cout << "Sum is equal to " << sum << endl;
    cout << "Sum is equal to " << recursiveSum(m, n) << endl;



    return 0;
}
