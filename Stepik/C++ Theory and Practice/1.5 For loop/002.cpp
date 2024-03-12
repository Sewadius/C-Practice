#include <iostream>
#include <array>
using std::cout;

int main() {
    std::array<int, 10> numbers;

    for (size_t i = 0; i < numbers.size(); i++)
        std::cin >> numbers[i];

    for (int i = numbers.size() - 1; i >= 0; i--)
        cout << numbers[i] << ' ';

    return 0;
}
