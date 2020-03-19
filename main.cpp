//days in a month page 221

#include <iostream>

using namespace std;

int main()
{
    int month, year;

    cout << "Enter a month as a number: ";
    cin >> month;
    cout << "Enter a four digit year: ";
    cin >> year;

    if (month == 2) {
        if (year % 100 == 0) {
            if (year % 400 == 0) {
                cout << "29 Days" << endl;
            }
        }
        else if (year % 4 == 0) {
            cout << "29 Days" << endl;
        }
        else {
        cout << "28 Days" << endl;
        }
    }

    else if (month <= 7) {
        if (month % 2 == 1) {
            cout << "31 Days" << endl;
        }
        else {
            cout << "30 Days" << endl;
        }
    }

    else {
        if (month % 2 == 0) {
            cout << "31 Days" << endl;
        }
        else {
            cout << "30 Days" << endl;
        }
    }

    return 0;
}
