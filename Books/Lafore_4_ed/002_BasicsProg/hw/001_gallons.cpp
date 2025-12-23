// Задание 1 - галлоны в кубические футы
#include <iostream>
using namespace std;

int main() {
    const double GALLONS_PER_CUBIC_FOOT = 7.481;
    double gallons;

    cout << "Введите количество галлонов: ";
    cin >> gallons;

    double cubicFeet = gallons / GALLONS_PER_CUBIC_FOOT;
    cout << "Объём в кубических футах: " << cubicFeet << endl;

    return 0;
}

