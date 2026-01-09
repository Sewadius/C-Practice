// Задание 2 - перевод из Цельсия в Фаренгейта и обратно
#include <iostream>
using std::cout, std::cin;

void printMsg();
void cel_to_fahren();
void fahren_to_cel();

int main() {
    printMsg();

    int chosen;
    cin >> chosen;

    switch (chosen) {
        case 1: cel_to_fahren(); break;
        case 2: fahren_to_cel(); break;
        default: cout << "Ошибка ввода!\n";
    }

    return 0;
}

// Вывод приветственного сообщения
void printMsg() {
    cout << "Нажмите 1 для перевода шкалы Цельсия в шкалу Фаренгейта,";
    cout << "\n2 для перевода шкалы Фаренгейта в шкалу Цельсия: ";
}

// Перевод из Цельсия в шкалу Фаренгейта
void cel_to_fahren() {

    cout << "Введите температуру по Цельсию: ";

    double cel;
    cin >> cel;

    double result = cel * 9 / 5 + 32;
    cout << "Значение по Фаренгейту: " << result << '\n';
}

// Перевод из Фаренгейта в шкалу Цельсия
void fahren_to_cel() {

    cout << "Введите температуру по Фаренгейту: ";

    double fahren;
    cin >> fahren;

    double result = (fahren - 32) * 5 / 9;
    cout << "Значение по Цельсию: " << result << '\n';
}

