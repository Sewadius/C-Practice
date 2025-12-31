// Page 127 - применение операции логического И
#include <iostream>
using namespace std;

int main() {
    const int 
        TREASURE_X = 7,
        TREASURE_Y = 11;

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

        if (x == TREASURE_X && y == TREASURE_Y) {
            cout << "\nВаши координаты: " << x << ", " << y;
            cout << "\nВы нашли сокровище!\n";
            return 0;
        }
    }

    return 0;
}

