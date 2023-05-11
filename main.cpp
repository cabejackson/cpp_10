#include <iostream>
using namespace std;

void functionName(); //func declaration

int main() {

    cout << "Hello world from main()! \n";
    functionName();
    //funcs are resuable
    functionName();
    functionName();

    return 0;
}

void functionName() { // func definition
    cout << "hello from function() \n";
}