// Задание DeepSeek - три переменных типа int
#include <iostream>
#include <string>
using std::cout, std::endl, std::string;

const string RECT = "прямоугольника: ";

int main() {
    int width = 15;             // Ширина
    int height = width + 5;     // Высота

    // Определение площади прямоугольника
    int area = width * height;

    // Вывод результатов
    cout << "Ширина " << RECT << width << endl;
    cout << "Высота " << RECT << height << endl;
    cout << "Площадь " << RECT << area << endl;

    // Непосредственная проверка
    cout << "Проверка: " << width << " * " 
        << height << " = " << width * height << endl;

    return 0;
}

