// Изменение значения переменной через ссылку
#include <iostream>

int main() {
    int a = 5;
    int &aref = a;

    std::cout << "a = " << a << "\n";

    aref = 10;

    std::cout << "a = " << a << "\n";
    
    return 0;
}
