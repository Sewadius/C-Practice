// Пример использования рекурсии, my1
#include <iostream>

const int RESULT = 100;

template <typename T>
T sum(T, const T&);

int main() {
    std::cout << sum(10, 5) << " ";
    std::cout << "\n";

    return 0;
}

template <typename T>
T sum(T a, const T& b) {
    if (a > RESULT) return 0;
    std::cout << a << " ";
    a += b;
    return sum(a, b);
}
