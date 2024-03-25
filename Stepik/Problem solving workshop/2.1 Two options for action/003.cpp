#include <iostream>
using std::cout;
using std::cin;

int main() {
    float kilometres, feets;
    cin >> kilometres >> feets;

    if (kilometres > feets * 0.3048 / 1000)
        cout << "Расстояние в километрах больше";
    else
        cout << "Расстояние в футах больше";

    return 0;
}
