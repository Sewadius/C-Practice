// Page 116 - игра с применением if...else
#include <iostream>
using namespace std;

int main() {
    char dir = ' ';
    int x = 10, y = 10;

    cout << "Нажмите 'q' для выхода...\n";

    while (dir != 'q') {
        cout << "\nВаши координаты: " << x << ", " << y;
        cout << "\nВыберите направление (n, s, e, w); ";
        cin >> dir;

        if (dir == 'n') y--;
        else if (dir == 's') y++;
        else if (dir == 'e') x++;
        else if (dir == 'w') x--;
    }

    return 0;
}

