#include <iostream>
using namespace std;

int main() {
    double num1, num2;
    char operation;
    cout << "*****Cabe's Calculator*****" << endl;
    cout << "Please enter a calculation: " << endl;
    cin >> num1 >> operation >> num2;

    switch(operation) {
        case '+': cout << num1 + num2 << endl; break;
        case '-': cout << num1 - num2 << endl; break;
        case '*': cout << num1 * num2 << endl; break;
        case '/': cout << num1 / num2 << endl; break;
        case '%':
            bool isNum1Int, isNum2Int;
            isNum1Int = ((int)num1 == num1); //5 == 5.0
            isNum2Int = ((int)num2 == num2);
            if (isNum1Int && isNum2Int)
                cout << (int)num1 % (int)num2 << endl;
            else
                cout << "invalid" << endl;
            break;
        default:
            cout << "invalid operation" << endl;
            break; 
    }
    return 0;
}