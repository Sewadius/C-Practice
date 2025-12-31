// Page 122 - switch и символьные переменные
#include <iostream>
using namespace std;

int main() {
    char dir = ' ';
    int x = 10, y = 10;

    cout << "Нажмите 'q' для выхода...\n";

    while (dir != 'q') {
        cout << "Ваши координаты: " << x << ", " << y;
        cout << "\nВыберите направление (n, s, e, w): ";
        cin >> dir;

        switch (dir) {
            case 'n': y--; break;
            case 's': y++; break;
            case 'e': x++; break;
            case 'w': x--; break;
            case 'q': cout << "Выход...\n"; break;
            default: cout << "Попробуйте ещё\n";
        }
    }

    return 0;
}

