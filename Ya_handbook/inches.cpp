// Программа для перевода сантиметров в дюймы
#include <iostream>
using std::cin;
using std::cout;

int main() {
    const float COEF = 2.54;
    double centimetres;

    cin >> centimetres;
    cout << centimetres / COEF << "\n";

    return 0;
}
