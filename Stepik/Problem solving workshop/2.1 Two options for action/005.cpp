#include <iostream>
using std::cout;

int main() {
    size_t circle, triangle;
    std::cin >> circle >> triangle;
    cout << (circle > triangle ? "Поместится" : "Не поместится");
    return 0;
}
