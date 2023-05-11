#include <iostream>
using namespace std;

void functionName(); //func declaration

void introduceMe(string name, string city, int age) {
    cout << "My name is " << name << endl;
    cout << "I am from " << city << endl;
    cout << "I am " << age << " years old." << endl;
}

int main() {

    cout << "Hello world from main()! \n";
    functionName();
    // //funcs are resuable
    // functionName();
    // functionName();
    introduceMe("Cabe", "NYC", 65);
    introduceMe("Johnnie", "Toronto", 54);

    return 0;
}

void functionName() { // func definition
    cout << "hello from function() \n";
}