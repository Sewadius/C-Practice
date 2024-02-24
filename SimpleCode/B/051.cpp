// Передача параметров в функцию по ссылке
#include <iostream>

void foo(int a) {
    a = 1;
}

void foo2(int &a) {
    a = 2;
}

void foo3(int *a) {
    *a = 3;
}

int main() {
    int value = 5;
    std::cout << "value = " << value << "\n\n";

    std::cout << "foo() = " << value << "\n";
    foo(value);
    std::cout << "value = " << value << "\n\n";

    std::cout << "foo2() = " << value << "\n";
    foo2(value);
    std::cout << "value = " << value << "\n\n";

    std::cout << "foo3() = " << value << "\n";
    foo3(&value);
    std::cout << "value = " << value << "\n";

    return 0;
}
