// Тернарный оператор
#include <iostream>

int main() {
    int a;

    std::cout << "Введите значение a: ";
    std::cin >> a;

    if (a < 10)
        std::cout << "a меньше 10\n";
    else
        std::cout << "a больше 10\n";

    std::cout << ((a < 10) ? 
        "a меньше 10\n" : "a больше 10\n");

    return 0;
}
