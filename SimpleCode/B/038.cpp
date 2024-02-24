// Параметры по умолчанию в функции
#include <iostream>

void foo(size_t = 5);

int main() {
    foo();
    return 0;
}

void foo(size_t a) {
    for (size_t i = 0; i < a; i++)
        std::cout << "#" << "\n";
}
