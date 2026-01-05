// Задание 6 - конвертор валют
#include <iostream>
#include <iomanip>
using std::cout;

void printResults(double, double, double, double);

const double
    POUND = 1.487, FRANC = 0.172, MARK = 0.584, YEN = 0.00955;

int main() {
    double dollars = 0.0;

    while (dollars <= 0.0) {
        cout << "Введите денежную сумму в долларах: $";
        std::cin >> dollars;

        if (dollars <= 0.0)
            cout << "Неверный ввод! Попрубуйте заново.\n";
    }

    double
        pounds = dollars / POUND,
        francs = dollars / FRANC,
        marks = dollars / MARK,
        yens = dollars / YEN;

    printResults(pounds, francs, marks, yens);

    return 0;
}

// Вывод результатов
void printResults(double p, double f, double m, double y) {
    cout << "\nВ фунтах стерлингов: " << std::fixed
        << std::setprecision(2) << p
        << "\nВ франках: " << f << "\nВ немецких марках: "
        << m << "\nВ японских йенах: " << y << '\n';
}

