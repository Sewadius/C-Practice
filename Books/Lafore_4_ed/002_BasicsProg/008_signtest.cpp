// Page 74 - знаковые/беззнаковые переменные
#include <iostream>
using namespace std;

int main() {
    int signedVar = 1500000000;             // Знаковая переменная
    unsigned int unsignVar = 1500000000;    // Беззнаковая переменная

    signedVar = (signedVar * 2) / 3;        // Выход за границы диапазона
    unsignVar = (unsignVar * 2) / 3;        // Вычисления внутри диапазона

    // Вывод неверного значения
    cout << "Знаковая переменная равна " << signedVar << endl;

    // Вывод корректного результата
    cout << "Беззнаковая переменная равна " << unsignVar << endl;
    
    return 0;
}
