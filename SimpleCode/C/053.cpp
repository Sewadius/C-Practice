// Работа с динамической памятью
#include <iostream>

int main() {
    int *pa = new int;
    std::cout << pa << "\n";

    *pa = 10;
    std::cout << "Значение: " << *pa << "\n";

    delete pa;
    
    return 0;
}
