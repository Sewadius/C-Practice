// Пример отличия префиксной и постфиксной формы
#include <iostream>
using std::cout;

int main() {
    const size_t ITERATIONS = 5;
    int a = 0;

    cout << "Начальное значение a = " << a;

    cout << "\nПрефиксная форма: ";
    for (size_t i = 0; i < ITERATIONS; i++)
        cout << ++a << " ";

    a = 0;
    cout << "\nПостфиксная форма: ";
    for (size_t i = 0; i < ITERATIONS; i++)
        cout << a++ << " ";

    cout << "\n";
    return 0;
}
