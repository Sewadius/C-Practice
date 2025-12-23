// Page 82 - использование библиотечной функции
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double number;

    cout << "Введите число: ";
    cin >> number;

    double answer = sqrt(number);
    cout << "Квадратный корень равен " << answer << endl;

    return 0;
}

