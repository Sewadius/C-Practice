// Факториал числа, рекурсия
#include <iostream>
using std::cin;
using std::cout;

int factorial(int);

int main() {
    int number;

    cout << "Введите целое положительное число: ";
    cin >> number;
    cout << "Факториал равен " << factorial(number) << "\n";

    return 0;
}

int factorial(int a) {
    if (a == 1) return 1;
    return a * factorial(a - 1);
}
