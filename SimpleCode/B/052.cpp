// Возврат нескольких значений функции через ссылки
#include <iostream>

void foo(int&, int&, int&);

int main() {
    int a = 0, b = 4, c = 34;

    std::cout << "a = " << a << ", b = " << b <<
        ", c = " << c << std::endl;
    
    foo(a, b, c);

    std::cout << "a = " << a << ", b = " << b <<
        ", c = " << c << std::endl;

    return 0;
}

void foo(int &a, int &b, int &c) {
    a = 10;
    b *= 2;
    c -= 100;
}
