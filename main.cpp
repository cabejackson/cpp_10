#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    int height, width;
    char symbol;

    cout << "Height: ";
    cin >> height;
    cout << "Width: ";
    cin >> width;
    cout << "Enter a symbol: ";
    cin >> symbol;

    for (int h = 0; h < height; h++){
        for( int w = 0; w < width; w++) {
            // cout << symbol << " ";
            cout << setw(3) << symbol ;
        }
        cout << endl;
    }

    return 0;
}