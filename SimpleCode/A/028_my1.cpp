// Размер пользовательского типа данных
#include <iostream>
using std::cout;

class Point {
public:
    Point(int, int, int);
    void print() const;
    void getSize() const;
private:
    int _x, _y, _z;
};

int main() {
    Point point(10, -15, 22);
    point.print();
    point.getSize();
    
    return 0;
}

Point::Point(int x, int y, int z) {
    this->_x = x;
    this->_y = y;
    this->_z = z;
}

void Point::print() const {
    cout << "X: " << _x << ", Y: " << _y << ", Z: " << _z << '\n';
}

void Point::getSize() const {
    cout << "Размер типа Point: " << sizeof(Point) << " байт\n";
    cout << "Размер для поля int: " << sizeof(int) << " байт\n";
}

