// Page 68 - переменные вещественного типа
#include <iostream>
using namespace std;

int main() {
    float radius;                   // Переменная вещественного типа
    const float PI = 3.14159F;      // Вещественная константа

    cout << "Введите радиус окружности: ";
    cin >> radius;

    float area = PI * radius * radius;
    cout << "Площадь круга равна " << area << endl;

    return 0;
}


