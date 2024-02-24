// Указатели, пример
#include <iostream>

int main() {
    int a = 5;
    int *px = &a;

    std::cout << "Адрес в памяти: " << px << "\n";
    std::cout << "Значение: \t" << *px << "\n";

    return 0;
}
