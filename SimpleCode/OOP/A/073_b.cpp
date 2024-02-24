// Класс Point
#include <iostream>

class Point {
public:
    int x;
    int y;
};

int main() {
    Point a;
    a.x = 1;
    a.y = 3;

    std::cout << "x = " << a.x << ", y = " << a.y << '\n';

    return 0;
}
