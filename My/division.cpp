// Пример приведения типов
#include <iostream>
using std::cout;
using std::cin;

void division(const int&, const int&);

int main() {
    int a, b;

    cout << "Введите два целых числа: ";
    cin >> a >> b;

    if (b == 0) {
        cout << "Делить на ноль нельзя!\n";
        return 0;
    }
    
    division(a, b);

    return 0;
}

void division(const int &a, const int &b) {
    cout << "Результат деления: " << (float)a / b << '\n';
}
