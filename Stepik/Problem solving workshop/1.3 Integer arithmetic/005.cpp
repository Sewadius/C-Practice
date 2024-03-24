#include <iostream>
using std::cout;

int main() {
    int number, sum = 0;
    std::cin >> number;
    sum += (number / 10 + number % 10);
    cout << sum;
    return 0;
}
