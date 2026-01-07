// Задание 7 - перевод температуры
#include <iostream>
using std::cout, std::cin;

int main() {
    double celsius;

    cout << "Введите температуру в градусах Цельсия: ";
    cin >> celsius;

    double fahrenheit = celsius * 9 / 5 + 32;
    cout << "Температура в градусах по Фаренгейту: "
        << fahrenheit << '\n';

    return 0;
}

