#include <iostream>
#include <iomanip>
using std::cout;

int main() {
    float pi;
    std::cin >> pi;
    cout << std::setprecision(4) << pi;
    return 0;
}
