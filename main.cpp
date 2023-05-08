#include <iostream>
using namespace std;

int main() {

    //BMI Calculator
    // weight (kg) / height * height (m)
    // underweight < 18.5
    // normal weight 18.5 - 24.9
    // overweight >25

    double bmi;
    double weight;
    double height;

     cout << "Please enter your weight(in kg): ";
     cin >> weight;
     cout << "Please enter your height(in m): ";
     cin >> height;

     bmi = weight / (height * height);

    if (bmi < 18.5) {
        cout << "Underweight." << endl;
    } else if (bmi >= 18.5 && bmi <= 24.9) {
        cout << "Normal weight." << endl;
    } else {
        cout << "Overweight." << endl;
    }
    cout << "Your bmi is " << bmi << endl;

    return 0;
}