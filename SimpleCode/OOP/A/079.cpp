// Перегрузка конструкторов класса
#include <iostream>

class Point {
public:
    Point();
    Point(int, int);
    Point(int, bool);
    void print();
private:
    int _x, _y;
};

int main() {
    Point a, b(12, -5);
    a.print();
    b.print();

    Point c(10, true);
    Point d(10, false);
    c.print();
    d.print();
    
    return 0;
}

Point::Point() {
    _x = 0; _y = 0;
}

Point::Point(int x, int y) {
    this->_x = x;
    this->_y = y;
}

Point::Point(int x, bool b) {
    if (b)
        _x = _y = x;
    else {
        _x = x; _y = -x;
    }
}

void Point::print() {
    std::cout << "x = " << _x << ", y = " << _y << '\n';
}
