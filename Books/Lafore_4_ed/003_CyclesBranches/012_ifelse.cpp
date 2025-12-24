// Page 112 - применение конструкции if...else
#include <iostream>
using namespace std;

int main() {
    int x;
    cout << "Введите число: "; cin >> x;

    if (x > 100)
        cout << "Это число больше, чем 100\n";
    else
        cout << "Это число не больше, чем 100\n";

    return 0;
}

