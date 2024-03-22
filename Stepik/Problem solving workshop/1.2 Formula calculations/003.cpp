#include <iostream>
#include <cmath>
using std::cout;

int main() {
    int a, b;
    std::cin >> a >> b;
    cout << (a + b) / 2 << ' ' << trunc(pow(a * b, .5));
    return 0;
}
