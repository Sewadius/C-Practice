// Page 151 - использование вложенных структур
#include <iostream>
using namespace std;

struct Distance {
    int feet;
    float inches;
};

struct Room {
    Distance length;
    Distance width;
};

int main() {
    Room dining;

    // Длина комнаты
    dining.length.feet = 13;
    dining.length.inches = 6.5;

    // Ширина комнаты
    dining.width.feet = 10;
    dining.width.inches = 0.0;

    // Преобразование длины и ширины в вещественный формат
    float l = dining.length.feet + dining.length.inches / 12;
    float w = dining.width.feet + dining.width.inches / 12;

    // Вычисление площади комнаты и вывод на экран
    cout << "Площадь комнаты равна " << l * w 
        << " квадратных футов" << endl;

    return 0;
}

