#include <iostream>
using namespace std;

int main() {

    int rows, cols;

    cout << "rows, cols: ";
    cin >> rows >> cols;

    int** table = new int*[rows]; //creates an int array of pointers
    //** syntax for int pointer to a pointer??

    for(int i = 0; i < rows; i++){
        table[i] = new int[cols];
    };

    table[1][2] = 88;

    //deallocating memory
    for(int i = 0; i < rows; i++){
        delete[] table[i];
    };
    delete[] table;
    table = NULL;

    return 0;
}