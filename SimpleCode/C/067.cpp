// Препроцессор, #define макрос функция
#include <iostream>
#define FOO(x, y) ((x) * (y))

int main() {
    std::cout << FOO(5, 6) << '\n';

    return 0;
}
