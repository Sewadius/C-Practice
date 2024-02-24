// Использование += и -=
#include <iostream>
using std::cout;

int main() {
    int a = 0;
    cout << "Начальное значение a = " << a << "\n";

    a += 10;
    cout << "Значение после изменения += 10, a = " << a << "\n";

    a -= 5;
    cout << "Значение после -= 5, a = " << a << "\n";

    return 0;
}
