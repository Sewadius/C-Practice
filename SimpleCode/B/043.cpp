// Пример использования рекурсии
#include <iostream>

int foo(int a) {
    if (a < 1) return a;
    a--;
    std::cout << a << " ";

    return foo(a);
}

int main() {
    foo(10);
    std::cout << "\n";

    return 0;
}
