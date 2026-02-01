// Page 270 - использование логической операции "НЕ"
#include <iostream>
#include <climits>
using namespace std;

bool is_int(double);

int main() {
    double num;
    cout << "Enter an integer value: ";
    cin >> num;

    while (!is_int(num)) {
        cout << "Out of range -- please try again: ";
        cin >> num;
    }

    int val = int(num);
    cout << "You're entered the integer " << val << "\nByn";

    return 0;
}

bool is_int(double x) {
    return x <= INT_MAX && x >= INT_MIN;
}

