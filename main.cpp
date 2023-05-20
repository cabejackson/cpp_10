#include <iostream>
using namespace std;

//using pointers to return multiple values from a function
int getMin(int numbers[], int size) {
    int min = numbers[0];
    for (int i = 1; i <= size;  i++){
        if(numbers[i] < min)
            min = numbers[i];
    }
    return min;
};

int getMax(int numbers[], int size) {
    int max = numbers[0];
    for (int i = 1; i <= size;  i++){
        if(numbers[i] > max)
            max = numbers[i];
    }
    return max;
};

void getMinAndMax(int numbers[], int size, int* min, int* max ) {
    for (int i = 1; i <= size;  i++){
        if(numbers[i] > *max)
            *max = numbers[i];
        if(numbers[i] < *min)
            *min = numbers[i];
    };

}

int main() {
    // int luckyNumbers[5] = { 2, 3, 5, 7, 9 };

    // cout << luckyNumbers << endl; // the address of the first element of the array is printed
    // cout << &luckyNumbers[0] << endl;
    // cout << "Value: "<< luckyNumbers[2] << endl;
    // cout << "Value: "<< *(luckyNumbers + 2) << endl; //dereferencing
    // cout << "Address of luckyNumbers[2]: " << &luckyNumbers[2] << endl;

    //how to enter values via an array
    // int luckyNumbers[5];

    // for(int i = 0; i <= 4; i++) {
    //     cout << "Number: ";
    //     cin >> luckyNumbers[i];
    // }

    // for (int i = 0; i <= 4; i++) {
    //     cout << *(luckyNumbers+i) << " ";
    // }

    int numbers[5] = {5, 4, -2, 29, 6};

    // cout << "Min is " << getMin(numbers, 5) << endl;
    // cout << "Max is " << getMax(numbers, 5) << endl;

    int min = numbers[0];
    int max = numbers[0];

    getMinAndMax(numbers, 5, &min, &max); 
    //passing a parameter using a reference
    //passing an address of a variable instead of teh variable itself
    cout << "Min is " << min << endl;
    cout << "Max is " << max << endl;

    //TODO: return min and max w/o using pointers



    return 0;
}