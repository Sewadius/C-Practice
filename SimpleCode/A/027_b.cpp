// Вывод значений для массива через цикл for
#include <iostream>

int main() {
    const size_t SIZE = 5;
    int arr[SIZE]{55, 511, 2, 123, 95};

    for (size_t i = 0; i < SIZE; i++)
        std::cout << arr[i] << " ";

    std::cout << "\n";

    return 0;
}
