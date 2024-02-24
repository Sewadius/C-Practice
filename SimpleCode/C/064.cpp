// Конкатенация строк
#include <iostream>
#include <cstring>

int main() {
    char str1[] = "Hello";
    char str2[] = "world";

    strcat(str1, str2);

    std::cout << str1 << '\n';

    return 0;
}
