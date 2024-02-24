// Строки и указатели
#include <iostream>
#include <cstring>

void foo(const char*);

int main() {
    const char *string = "Hello!";
    std::cout << string << '\n';

    char str[] = "World\n";
    char *pStr = str;
    std::cout << pStr << '\n';

    const char *strArr[] = {"Hello", "World", "TEST"};

    for (int i = 0; i < 3; i++)
        std::cout << strArr[i] << std::endl;

    foo(string);

    return 0;
}

void foo(const char *str) {
    std::cout << "Длина строки: " << strlen(str) << '\n';
}
