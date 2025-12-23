// Page 77 - приведение типов static_cast
#include <iostream>
using namespace std;

int main() {
    int intVar = 1500000000;
    intVar = (intVar * 100) / 100;

    // Неверный результат
    cout << "Значение intVar равно " << intVar << endl;

    intVar = 1500000000;
    intVar = (static_cast<double>(intVar) * 100) / 100;

    // Вывод верного результата
    cout << "Значение intVar равно " << intVar << endl;

    return 0;
}

