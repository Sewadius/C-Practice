#include <iostream>
using std::cout;

int main() {
    float temp;
    std::cin >> temp;
    cout << int((temp - 32) / 1.8);
    return 0;
}
