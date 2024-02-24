// Геттеры и сеттеры
#include <iostream>
using std::cout;

class Point {
public:
    int getX() const;
    int getY() const;
    void setX(int);
    void setY(int);
    void print();
private:
    int _x, _y;
};

int main() {
    Point point;

    point.setX(5);
    point.setY(10);
    point.print();

    return 0;
}

int Point::getX() const {
    return _x;
}

int Point::getY() const {
    return _y;
}

void Point::setX(int x) {
    this->_x = x;
}

void Point::setY(int y) {
    this->_y = y;
}

void Point::print() {
    cout << "x = " << getX() << ", y = " << getY() << '\n';
}
