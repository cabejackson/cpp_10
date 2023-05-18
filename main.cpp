#include <iostream>
using namespace std;

//write out a variable using a func that receives a pointer
void printNumber(int* numberPtr) {
    cout << *numberPtr << endl;
};
void printLetter(char* charPtr) {
    cout << *charPtr << endl;
};
void print(void* ptr, char type) {
    switch(type){
        case 'i': cout << *((int*)ptr) << endl; break;
        case 'c': cout << *((char*)ptr) << endl; break;
    };
};

int main() {

    int num = 5;
    char letter = 'a';
    // printNumber(&num);
    // printLetter(&letter);
    print(&num, 'i');
    print(&letter, 'c');


    return 0;
}