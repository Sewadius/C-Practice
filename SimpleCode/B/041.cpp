// Шаблоны функций
#include <iostream>

template <typename T>
T sum(T, T);

int main() {
    std::cout << sum(5, 10) << "\n";
    std::cout << sum(5.5, 1.2) << "\n";

    return 0;
}

template <typename T>
T sum(T a, T b) {
    return a + b;
}
