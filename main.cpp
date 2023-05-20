#include <iostream>
using namespace std;

int main() {

    int size;
    cout << "Size: ";
    cin >> size;
    // int myArray[size]; //not allowed bc it's not dynamic
    int* myArray = new int[size];

    for (int i = 0; i < size; i++){
        cout << "Array[" << i << "]: ";
        cin >> myArray[i];
    }
    for (int i = 0; i < size; i++){
        // cout << myArray[i] << " ";
        cout << *(myArray+i) << " "; //another way to access the element, by dereferencing
    }



    return 0;
}