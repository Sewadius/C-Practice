// Указатель на ссылку
#include <iostream>

int main() {
    int a = 5;
    int &aref = a;
    int *ppa = &aref;

    std::cout << "a = " << a << "\n";

    *ppa = 10;

    std::cout << "a = " << a << "\n";

    return 0;
}
