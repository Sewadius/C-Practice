// А. Арбуз - сложность 800
#include <iostream>

const size_t TWO = 2;

bool checkWeight(const size_t&);

int main() {
    size_t weight;              // Вес арбуза
    std::cin >> weight;         // Ввод данных

    // Проверка и вывод
    std::cout << (checkWeight(weight) ? 
        "YES\n" : "NO\n");

    return 0;
}

bool checkWeight(const size_t &w) {
    return w > TWO && w % TWO == 0;
}
