// Перегрузка оператора равенства == и не равно !=
#include <iostream>
#include <iomanip>

class Point {
public:
    Point();
    Point(int, int);
    bool operator== (const Point&);
    bool operator!= (const Point&);
private:
    int _x, _y;
};

int main() {
    Point a(5, 1);
    Point b(9, 4);
    Point c(5, 1);

    bool result = a == b;

    std::cout << "Точки a и b равны: " << std::boolalpha << result << '\n';
    std::cout << "Точки a и c равны: " << (a == c) << '\n';
    std::cout << "Точки b и с не равны: " << (b != c) << '\n'; 
    
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
