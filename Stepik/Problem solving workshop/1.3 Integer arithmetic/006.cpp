#include <iostream>
using std::cout;

int main() {
    int number;
    std::cin >> number;
    cout << number / 10 << " десятков, " 
        << number % 10 << " единиц";
    return 0;
}
