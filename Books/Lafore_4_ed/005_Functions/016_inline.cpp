// Page 200 - применение встроенных функций
#include <iostream>
using namespace std;

inline float lbstokg(float pounds) {
    return 0.453592 * pounds;
}

int main() {
    float lbs;

    cout << "Введите вес в фунтах: ";
    cin >> lbs;

    cout << "Вес в килограммах: " << lbstokg(lbs);
    cout << endl;

    return 0;
}

