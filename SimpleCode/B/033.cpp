// Пример функции
#include <iostream>

void foo() {
    std::cout << "Я функция, меня вызвали!\n";
}

int main() {
    const size_t AMOUNT = 5;

    for (size_t i = 0; i < AMOUNT; i++) 
        foo();

    return 0;
}
