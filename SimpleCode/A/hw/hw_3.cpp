// Домашнее задание 3
#include <iostream>
using std::cout;

int main() {
    int a, b;
    float result;
    char oper;

    cout << "Введите первое целое число: "; 
    std::cin >> a;
    cout << "Введите второе целое число: ";
    std::cin >> b;

    cout << "\nВыберите нужную арифметическую операцию:\n" <<
        "(+, -, *, /) ";
    std::cin >> oper;

    switch (oper) {
        case '+':
            a += b; 
            cout << "\nРезультат сложения: " << a << "\n";
            break;
        case '-':
            a -= b; 
            cout << "\nРезультат вычитания: " << a << "\n";
            break;
        case '*':
            a *= b;
            cout << "\nРезультат произведения: " << a << "\n";
            break;
        case '/':
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
