// Область видимости
#include <iostream>

int a;
void foo();

int main() {
    std::cout << "Глобальная переменная a = " << a << "\n";
    a++;
    std::cout << "После инкремента: " << a << "\n";
    foo();
    std::cout << "После вызова функции foo(): " << a << "\n";

    return 0;
}

void foo() {
    ++a;
}
