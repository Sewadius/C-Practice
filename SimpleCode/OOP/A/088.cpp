// Дружественные функции и классы
#include <iostream>
#include <iomanip>

class Point {
public:
    Point();
    Point(int, int);
    void print() {
        std::cout << "x = " << _x << ", y = " << _y << '\n';
    }
    friend void changeX(Point&);
private:
    int _x, _y;
};

int main() {
    Point a(0, 0);

    a.print();
    changeX(a);
    a.print();

    return 0;
}

void changeX(Point &value) {
    value._x = -1;
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
