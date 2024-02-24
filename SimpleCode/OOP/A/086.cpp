// Перегрузка инкремента и декремента
#include <iostream>
#include <iomanip>

class Point {
public:
    Point();
    Point(int, int);
    bool operator==(const Point&);
    bool operator!=(const Point&);
    Point operator+(const Point&);
    Point& operator++();                // Префиксная форма
    Point& operator++(int);             // Постфиксная форма
    void print() {
        std::cout << "x = " << _x << ", y = " << _y << '\n';
    }
private:
    int _x, _y;
};

int main() {
    Point a(1, 1);
    ++a;

    std::cout << "После инкремента: ";
    a.print();


    
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

bool Point::operator==(const Point& other) {
    return this->_x == other._x && this->_y == other._y;
}

bool Point::operator!=(const Point& other) {
    return !(*this == other);
}

Point Point::operator+(const Point& other) {
    Point temp;

    temp._x = this->_x + other._x;
    temp._y = this->_y + other._y;

    return temp;
}

Point& Point::operator++() {
    this->_x++;
    this->_y += 1;

    return *this;
}

Point& Point::operator++(int value) {
    Point temp(*this);

    this->_x++;
    this->_y++;

    return temp;
}
