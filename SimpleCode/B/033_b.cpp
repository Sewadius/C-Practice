// Пример функции с параметрами
#include <iostream>
using std::cout;
using std::cin;

int sum(int, int);

int main() {
    int a, b;

    cout << "Введите два целых числа: ";
    cin >> a >> b;

    cout << "Сумма: " << sum(a, b) << "\n";

    return 0;
}

int sum(int a, int b) {
    return a + b;
}
