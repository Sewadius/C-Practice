// Вложенный цикл
#include <iostream>
using std::cout;

int main() {
    for (size_t i = 1; i < 5; i++) {
        cout << "Сработал 1-й цикл, итерация " << i << "\n";

        for (size_t j = 1; j < 5; j++)
            cout << "\tСработал 2-й цикл, итерация " << j << "\n";

        cout << "\t*** *** *** *** ***\n";
    }

    return 0;
}
