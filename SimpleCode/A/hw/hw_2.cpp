// Домашнее задание 2
#include <iostream>
using std::cout;

int main() {
    int a;
    const int PARITY = 2;

    cout << "Введите целое число: ";
    std::cin >> a;

    if (a % PARITY)
        cout << "Число нечётное!\n";
    else
        cout << "Число чётное!\n";

    return 0; 
}
