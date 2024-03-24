#include <iostream>
#include <iomanip>
using std::cout;

int main() {
    float a, b;
    std::cin >> a >> b;
    cout << std::setprecision(1) << std::fixed;

    if (a > b) {
        cout << a << " больше " << b << '\n';
        cout << b << " меньше " << a;
    } else {
        cout << b << " больше " << a << '\n';
        cout << a << " меньше " << b; 
    }

    return 0;
}
