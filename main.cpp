#include <iostream>
using namespace std;

int main() {
    double num1, num2;
    char operation;
    cout << "*****Cabe's Calculator*****" << endl;
    cout << "Please enter a calculation: " << endl;
    cin >> num1 >> operation >> num2;

    switch(operation) {
        case '+': 
            cout << num1 + num2 << endl;
            break;
        case '-':
            cout << num1 - num2 << endl;
            break;
        case '*':
            cout << num1 * num2 << endl;
            break;
        case '/':
            cout << num1 / num2 << endl;
            break;
        default:
            cout << "invalid operation" << endl;
            break; 
    }
    
    return 0;
}