#include <iostream>
using namespace std;

//sum nums between m and n
int recursiveSum(int m, int n){ // m=4, n=4
    if (m == n) //base case
        return m;
    return m + recursiveSum(m+1, n);// 9
}
//calculate factorial of a number
int recursiveFactorial(int num, int factorial){
    if(num == factorial)
        return num;
    return num * recursiveFactorial(num+1, num)
}



int main() {

    int m = 2, n = 4;
    //TODO: ask user to enter the nums and check for which one is smaller/larger

    // int sum = 0;
    // for(int i = m; i <= n; i++) {
    //     sum += i;
    // }
    // cout << "Sum is equal to " << sum << endl;
    cout << "Sum is equal to " << recursiveSum(m, n) << endl;

    //Calculate the factorial of a number

    int num, factorial = 1;

    // cout << "Enter a number: ";
    // cin >> num;

    // // incrementing
    // if (num > 0){
    //     for (int i = 1; i <= num; i++ ) {
    //         factorial *= i;
    //     }
    //     //decreasing
    //     // for (int i = num; i >= 1; i-- ) {
    //     //     factorial *= i;
    //     // }
    //     cout << num << "!= " << factorial << endl;
    // } else if (num == 0) {
    //     cout << num << "!= 1" << endl;
    // } else {
    //     cout << " Cannot obtain the factorial of a negative number." << endl;
    // }

     cout << " thisss" << recursiveFactorial(num, factorial);
        // cout << num << "!= " << factorial << endl;



    return 0;
}
