#include <iostream>
#include <iomanip>
using std::cout;
using std::cin;

int main() {
    float t;
    cin >> t;

    cout << std::setprecision(1) << std::fixed;
    cout << t * 1.8 + 32.;
    return 0;
}
