// Случайные числа от 0 до 10
#include <iostream>
#include <ctime>

int main() {
    srand(time(NULL));
    const size_t COUNT = 10;

    std::cout << "Случайные числа от 0 до 10\n";
    for (size_t i = 0; i < COUNT; i++)
        std::cout << rand() % 10 << " ";

    std::cout << "\n\nСлучайные числа от 5 до 15\n";
    for (size_t i = 0; i < COUNT; i++)
        std::cout << rand() % 10 + 5 << " ";

    std::cout << "\n";

    return 0;
}
