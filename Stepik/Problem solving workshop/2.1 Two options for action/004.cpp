#include <iostream>
using std::cout;

int main() {
    float v1, v2;
    std::cin >> v1 >> v2;
    v1 = v1 * 60 / 1000;
    cout << "Скорость в " << (v1 > v2 ? "км/ч" : "м/с") << " больше";
    return 0;
}
