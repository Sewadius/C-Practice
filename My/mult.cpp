// Умножение двух чисел через сложение
#include <iostream>
using std::cin;
using std::cout;

void multiply(const int&, const int&);

int main() {
    int a, b;
    cout << "Введите два целых числа через пробел: ";
    cin >> a >> b;
    multiply(a, b);
    return 0;
}

void multiply(const int& a, const int& b) {
    int result;
    int k;
    if (a < b) {
        result = b;
        k = a;
        while (k > 0) {
            cout << result << ' ';
            result += b;
            --k;
        }
    } else {
        result = a;
        k = b;
        while (k > 0) {
            cout << result << ' ';
            result += a;
            --k;
        }
    }
    cout << '\n';
}
