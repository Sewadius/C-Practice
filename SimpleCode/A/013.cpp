// Пример использования оператора switch
#include <iostream>
using std::cout;

int main() {
    int a;
    cout << "Введите число: ";
    std::cin >> a;

    switch (a) {
        case 1:
            cout << "Вы ввели один\n"; break;
        case 2:
            cout << "Вы введи два\n"; break;
        default:
            cout << "Я не знаю этого числа\n";
    }

    return 0;
}
