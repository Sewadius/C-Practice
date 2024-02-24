// Домашнее задание 3, вариант 2
#include <iostream>
using std::cout;

int main() {
    int a, b;
    float result;
    char oper;

    cout << "Введите два целых числа: "; 
    std::cin >> a >> b;

    cout << "\nВыберите нужную арифметическую операцию:\n" <<
        "(+, -, *, /) ";
    std::cin >> oper;

    switch (oper) {
        case '+':   // Сложение
            cout << "\nРезультат сложения: " << a + b << "\n";
            break;
        case '-':   // Вычитание
            cout << "\nРезультат вычитания: " << a - b << "\n";
            break;
        case '*':   // Умножение
            cout << "\nРезультат произведения: " << a * b << "\n";
            break;
        case '/':   // Деление
            if (b != 0) {
                result = (float) a / b;
                cout << "\nРезультат деления: " << result << "\n";
            }
            else
                cout << "Ошибка! Деление на ноль!\n";
            break;
        default:
            cout << "Выбрана неверная операция!\n";
    }

    return 0;
}
