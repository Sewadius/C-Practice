// Модификаторы доступа
#include <iostream>
using std::cout;

class Point {
public:
    int x;
    void print();
private:
    int _y;
    int _z;
    void _printY();
};

int main() {
    Point point;
    point.print();
    
    return 0;
}

void Point::print() {
    cout << "y = " << _y << "\nx = " << x <<
        "\nz = " << _z << '\n';
    _printY();
}

void Point::_printY() {
    cout << _y << std::endl;
}
