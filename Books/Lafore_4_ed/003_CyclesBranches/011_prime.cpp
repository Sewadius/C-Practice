// Page 111 - цикл for и if для простых чисел
#include <iostream>
using namespace std;

int main() {
    unsigned long n, j;
    cout << "Введите число: ";
    cin >> n;

    for (j = 2; j <= n / 2; ++j) {
        if (n % j == 0) {
            cout << "Число не простое, делится на " << j << endl;
            return 0;
        }
    }

    cout << "Число является простым\n";
    return 0;
}

