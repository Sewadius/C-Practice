// Ключевое слово inline
#include <iostream>

inline int sum(int, int);

int main() {
    std::cout << sum(1, 2) << "\n";
    return 0;
}

inline int sum(int a, int b) {
    return a + b;
}
