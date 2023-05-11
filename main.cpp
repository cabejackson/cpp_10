#include <iostream>
using namespace std;

void functionName(); //func declaration

void introduceMe(string name) {
    cout << "My name is " << name << endl;
}

int main() {

    cout << "Hello world from main()! \n";
    functionName();
    // //funcs are resuable
    // functionName();
    // functionName();
    introduceMe("Cabe");
    introduceMe("Johnnie");

    return 0;
}

void functionName() { // func definition
    cout << "hello from function() \n";
}