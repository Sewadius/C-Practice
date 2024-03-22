#include <iostream>
#include <cmath>
#include <iomanip>
using std::cout;

int main() {
    double a;
    std::cin >> a;
    cout << std::setprecision(16) << 
        pow(((2 * a + sin(abs(3 * a))) / 3.56), .5);
    return 0;
}
