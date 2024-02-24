// Переменные, способ объявления
#include <iostream>
using std::cout;
using std::endl;

int main() {
    int a;
    a = 5;
    int b = -5;

    cout << "До изменения a = " << a << endl;
    a = 10;
    cout << "После изменения a = " << a << endl;

    cout << "Переменная b = " << b << endl;
    return 0;
}
