#include <iostream>
using namespace std;

//function overloading
//if you have dif params/num of params/return types you dont need to rename each func a dif name
int sum (int a, int b);
double sum (double a, double b);
float sum (float a, float b, float c);

int main() {

    cout << sum(4, 3) << endl;
    cout << sum(4.4, 3.3) << endl;
    cout << sum(4.4, 3.3, 2.2) << endl;

    return 0;
}

int sum (int a, int b) {
    return a + b;
};
double sum (double a, double b) {
    return a + b;
};
float sum (float a, float b, float c) {
    return a + b + c;
};