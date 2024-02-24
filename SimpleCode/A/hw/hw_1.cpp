// Домашнее задание 1
#include <iostream>
using std::cout;
using std::cin;

int main() {
    int a, b, c;
    const int NUMBER_AMOUNT = 3;

    cout << "Введите три целых числа: ";
    cin >> a >> b >> c;

    cout << "\nСумма чисел: " << a + b + c << "\n";
    cout << "Произведение чисел: " << a * b * c << "\n";
    cout << "Среднее арифметическое чисел: " 
        << (float)(a + b + c) / NUMBER_AMOUNT << "\n";
    
    return 0;
}
