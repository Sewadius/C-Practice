// Домашнее задание 4
#include <iostream>
using std::cout;
using std::cin;

int main() {
    size_t number;
    char ch;
    bool horizontal;

    cout << "Введите число символов: "; cin >> number;
    cout << "Введите символ: "; cin >> ch;
    cout << "Введите тип линии (1 - горизонтальная, 0 - вертикальная): ";
    cin >> horizontal;

    for (size_t i = 0; i < number; i++)
        if (horizontal)
            cout << ch;
        else
            cout << ch << "\n";

    if (horizontal) cout << "\n";

    return 0;
}
