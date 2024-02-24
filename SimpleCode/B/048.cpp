// Передача параметров в функцию по указателю
#include <iostream>

void foo(int *pa) {
    (*pa)++;
}

int main() {
    int a = 0;

    std::cout << a << "\n";

    foo(&a);

    std::cout << a << "\n";

    return 0;
}
