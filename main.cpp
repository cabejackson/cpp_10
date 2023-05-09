#include <iostream>
using namespace std;

int main() {

    int year, month;
    cout << "Please enter the year and month (ex: 2004 4): ";
    cin >> year >> month;

    switch(month) {
        case 2: (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)? 
            cout << "29 days" << endl : cout << "28 days" << endl; break;
        case 4:
        case 6:
        case 9:
        case 11: cout << "30 days month" << endl; break;
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12: cout << "31 days month" << endl; break;
   }

    return 0;
}