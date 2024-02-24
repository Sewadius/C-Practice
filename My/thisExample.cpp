// Пример использования this
#include <iostream>

class Test {
public:
    Test(int, int);
    void print() const;
    Test setX(int);
    Test setY(int);
private:
    int _x, _y;
};

int main() {
    Test obj1(-1, -1);
    obj1.print();

    obj1.setX(10).setY(20).print();
    
    return 0;
}

Test::Test(int x = 0, int y = 0) {
    this->_x = x;
    this->_y = y;
}

void Test::print() const {
    std::cout << "x = " << _x << ", y = " << _y << '\n';
}

Test Test::setX(int x) {
    this->_x = x;
    return *this;
}

Test Test::setY(int y) {
    this->_y = y;
    return *this;
}
