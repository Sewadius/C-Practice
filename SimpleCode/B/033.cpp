// Function example
#include <iostream>

void foo();

int main() {
    std::cout << "Lesson 033: Function example\n\n";

    const uint8_t AMOUNT = 5;

    for (uint8_t i = 0; i < AMOUNT; i++) {
        std:: cout << i + 1 << ") ";
        foo();
    }

    getchar();
    return 0;
}

void foo() {
    std::cout << "I'm a function, I've been called!\n";
}
