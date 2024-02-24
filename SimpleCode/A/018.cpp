// Использование ключевого слова break
#include <iostream>

int main() {
    for (int i = 0; ; i++) {
        std::cout << "Переменная i = " << i << "\n";
        if (i == 5) break;
    }
    return 0;
}
