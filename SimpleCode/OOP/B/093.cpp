// id generator, уникальный идентификатор с использованием static
#include <iostream>
#include <string>
using std::string;
using std::cout;

class Apple {
public:
    static int count;
    Apple(int, string);
    int getId() const;
private:
    int _weight;
    string color;
    int _id;
};

int main() {
    Apple apple(150, "Red");
    Apple apple2(100, "Green");
    Apple apple3(200, "Yellow");

    cout << apple.getId() << '\n';
    cout << apple2.getId() << '\n';
    cout << apple3.getId() << '\n';
    
    return 0;
}

Apple::Apple(int weight, string color) {
    this->_weight = weight;
    this->color = color;
    count++;
    _id = count;
}

int Apple::getId() const {
    return _id;
}

int Apple::count = 0;
