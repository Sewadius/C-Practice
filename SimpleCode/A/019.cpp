// Ключевое слово continue
#include <iostream>

int main() {
    for (int i = 0; i < 10; i++) {
        if (i < 5) continue;
        std::cout << "Переменная i = " << i << "\n";
    }

    return 0;
}
