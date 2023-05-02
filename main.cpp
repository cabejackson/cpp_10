#include <iostream>
using namespace std;

int main() {
    
    //variables
        //give meaningful names
        //cant contain special characters besides _
        //cant start with numbers
        //cant have spaces
        //should be camelCase
    float annualSalary;
    cout << "Please enter your annual salary: ";
    cin >> annualSalary;

    float monthlySalary = annualSalary / 12;

    cout << "Your monthly salary is " << monthlySalary << endl;
    cout << "In 10 years you will earn " << annualSalary * 10 << endl;




    return 0;
}