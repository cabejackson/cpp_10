#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    //shape: rectangles

    // int height, width;
    // char symbol;

    // cout << "Height: ";
    // cin >> height;
    // cout << "Width: ";
    // cin >> width;
    // cout << "Enter a symbol: ";
    // cin >> symbol;

    // for (int h = 0; h < height; h++){
    //     for( int w = 0; w < width; w++) {
    //         cout << setw(3) << symbol ;
    //     }
    //     cout << endl;
    // }

    //shape: triangles
    int length;
    char symbol;

    cout << "Length: ";
    cin >> length;
    cout << "Enter a symbol: ";
    cin >> symbol;

    for (int i = 1; i <= length; i++){
        for ( int j = 1; j <= i; j++) {
            cout << setw(2) << symbol;
        };
        cout << endl;
    }
    cout << endl << endl;
    //reverse the triangle
    for (int i = length; i >= 1; i--){
        for ( int j = 1; j <= i; j++) {
            cout << setw(2) << symbol;
        };
        cout << endl;
    }

    return 0;
}