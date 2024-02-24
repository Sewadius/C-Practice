// Конструктор класса
#include <iostream>

class Point {
public:
    Point(int, int);
    void print() const {
        std::cout << "x = " << _x << ", y = " << _y << '\n';
    }
private:
    int _x, _y;
};

int main() {
    Point a(5, 44);
    a.print();

    Point b(77, 9);
    b.print();

    return 0;
}

Point::Point(int x, int y) {
    this->_x = x;
    this->_y = y;
}
