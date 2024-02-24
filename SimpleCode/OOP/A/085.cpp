// Перегрузка оператора сложения
#include <iostream>
#include <iomanip>

class Point {
public:
    Point();
    Point(int, int);
    bool operator== (const Point&);
    bool operator!= (const Point&);
    Point operator+ (const Point&);
    void print() {
        std::cout << "x = " << _x << ", y = " << _y << '\n';
    }
private:
    int _x, _y;
};

int main() {
    Point a(5, 1);
    Point b(9, 4);

    Point c = a + b;

    std::cout << "Точка a: ";
    a.print();

    std::cout << "Точка b: ";
    b.print();

    std::cout << "Результат сложения: ";
    c.print();
    
    return 0;
}

Point::Point() {
    _x = _y = 0;
    std::cout << this << " constructor" << '\n';
}

Point::Point(int x, int y) {
    this->_x = x;
    this->_y = y;
    std::cout << this << " constructor" << '\n';
}

bool Point::operator== (const Point& other) {
    return this->_x == other._x && this->_y == other._y;
}

bool Point::operator!= (const Point& other) {
    return !(*this == other);
}

Point Point::operator+(const Point& other) {
    Point temp;

    temp._x = this->_x + other._x;
    temp._y = this->_y + other._y;

    return temp;
}
