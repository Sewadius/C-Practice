// Задание 2 - структура для точек
#include <iostream>
using std::cout, std::cin;

struct Point {
    int x;
    int y;
};

Point getPoint();
Point operator+ (const Point&, const Point&);

int main() {
    Point p1 = getPoint(); 
    Point p2 = getPoint();

    Point p3 = p1 + p2;

    cout << "Координаты точки p1 + p2 равны: (" <<
        p3.x << ", " << p3.y << ")\n";

    return 0;
}

// Перегрузка оператора + для сложения двух Point
Point operator+ (const Point& lhs, const Point& rhs) {
    return Point { lhs.x + rhs.x, lhs.y + rhs.y };
}

// Получение координат от пользователя
Point getPoint() {
    static int counter = 1;
    int a, b;

    cout << "Введите координаты точки p" << counter << ": ";
    cin >> a >> b;
    ++counter;

    return Point { a, b };
}
