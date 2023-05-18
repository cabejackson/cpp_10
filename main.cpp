#include <iostream>
using namespace std;

//write out a variable using a func that receives a pointer
void printNumber(int* numberPtr) {
    cout << *numberPtr << endl;
};

int main() {

    int num = 5;
    printNumber(&num);


    return 0;
}