// Использование двух переменных в for
#include <iostream>

int main() {
    for (int i = 0, j = 10; i < 10; i++, j--)
        std::cout << "i = " << i << ", j = " << j << "\n";

    return 0;
}
