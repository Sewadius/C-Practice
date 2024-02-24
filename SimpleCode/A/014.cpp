// Пример цикла while
#include <iostream>

int main() {
    size_t i = 0;

    while (i < 10) {
        std::cout << "Текст вывелся на экран\t" <<
            "Текущее значение i: " << i << "\n";
        ++i;
    }

    return 0;
}
