// Page 105 - использование управляющих последовательностей
#include <iostream>
using namespace std;

int main() {
    cout << "\aOperation \"HyperHype\" is now activated!\n";
    cout << "Enter your agent code: _____\b\b\b\b\b";

    long code;
    cin >> code;

    cout << "\aYou entered: " << code << "...\n";
    cout << "\aCode verified! Proceed with Plan Z3!\n";

    return 0;
}

