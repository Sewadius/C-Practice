// Page 106 - применение цикла do
#include <iostream>
using namespace std;

int main() {
    long dividend, divisor;
    char ch;

    do {
        // Ввод данных
        cout << "Введите делимое: "; cin >> dividend;
        cout << "Введите делитель: "; cin >> divisor;

        // Вывод результата
        cout << "Частное равно " << dividend / divisor
            << ", остаток равен " << dividend % divisor << endl;

        cout << "Ещё раз? (y/n): ";
        cin >> ch;

    } while (ch != 'n');

    return 0;
}

