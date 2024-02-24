// Шаблонная функция с двумя разными типами
#include <iostream>

template <typename T1, typename T2>
T2 sum(T1, T2);

int main() {
    std::cout << sum(1, 1.5) << "\n";
    return 0;
}

template <typename T1, typename T2>
T2 sum(T1 a, T2 b) {
    return a + b;
}
