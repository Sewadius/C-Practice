#include <iostream>
using std::cout;

int main() {
    int n;
    std::cin >> n;
    int first = n / 100;
    int last = n % 10;
    cout << (first > last ? "Первая" : "Последняя") <<
        " цифра больше";
    return 0;
}
