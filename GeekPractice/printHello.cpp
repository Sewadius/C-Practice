// Start Coding
#include <iostream>

void printHello();

int main() {
    printHello();

    std::cout << '\n';
    
    return 0;
}

void printHello() {
    const char *hello = "Hello World";
    std::cout << hello;
}

