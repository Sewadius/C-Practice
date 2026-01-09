// Задание 1 - таблица умножения
#include <iostream>
using std::cout, std::cin;

const int
    ROWS = 20, COLS = 10;

int main() {
    int number;
    cout << "Введите число: ";
    cin >> number;
    
    int multiplier = 1;     // Изменяемый множитель

    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j)
            cout << number * multiplier++;

        cout << '\n';
    }

    return 0;
}

