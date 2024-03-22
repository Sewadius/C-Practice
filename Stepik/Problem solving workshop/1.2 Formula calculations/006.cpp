#include <iostream>
using std::cout;

const size_t
    MONITOR = 9000,
    SYSTEM_UNIT = 50000,
    KEYBOARD = 3000,
    MOUSE = 1500;

int main() {
    size_t computers;
    std::cin >> computers;

    size_t total_price = MONITOR + SYSTEM_UNIT + KEYBOARD + MOUSE;
    cout << computers * total_price;

    return 0;
}
