// 5. Numerical adder
#include <iostream>
using std::cout;

int sum_digits(int);

int main() {
    int number;

    cout << "Enter ingeger number: ";
    std::cin >> number;

    cout << "Sum of digits: " << sum_digits(number) << "\n\n";

    system("pause");
    return 0;
}

int sum_digits(int number) {
    if (number == 0) return 0;
    return number % 10 + sum_digits(number / 10);
}
