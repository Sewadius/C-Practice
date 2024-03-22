#include <iostream>
using std::cout;

const size_t 
    SWEETS = 340, BISCUITS = 230, APPLES = 98;

int main() {
    size_t x, y, z;
    std::cin >> x >> y >> z;
    cout << x * SWEETS + y * BISCUITS + z * APPLES;
    return 0;
}
