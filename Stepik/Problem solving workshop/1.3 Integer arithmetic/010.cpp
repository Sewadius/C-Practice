#include <iostream>
using std::cout;

int main() {
    int number, sum = 0;
    std::cin >> number;

    while (number > 0) {
        sum += number % 10;
        number /= 10;
    }

    cout << sum;
    return 0;
}
