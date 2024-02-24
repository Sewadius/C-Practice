// Строка в C++
#include <iostream>
#include <cstring>

int main() {
    char symbol = 'q';
    std::cout << symbol << '\n';

    char string[] = "a";
    std::cout << string << std::endl;

    // Без терминирующего нуля
    char str[] = {'H', 'e', 'l', 'l', 'o'};
    std::cout << str << std::endl;
    std::cout << "Длина строки: " << strlen(str) << std::endl;

    // С терминирующим нулём
    char str_2[] = {'H', 'e', 'l', 'l', 'o', '\0'};
    std::cout << str_2 << std::endl;
    std::cout << "Длина строки: " << strlen(str_2) << std::endl;

    return 0;
}
