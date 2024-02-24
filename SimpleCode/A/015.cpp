// Пример использования цикла do-while
#include <iostream>

int main() {
    int a = 18;

    do
        std::cout << "Значение a = " << a++ << "\n";
    while (a < 20);

    std::cout << "Цикл do-while завершён!\n";

    return 0;
}
