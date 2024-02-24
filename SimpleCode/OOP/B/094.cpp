// Статические методы класса
#include <iostream>
#include <string>
using std::string;
using std::cout;

class Apple {
public:
    Apple(int, string);
    int getId() const;
    string getColor() const;
    static int getCount();
    static void changeColor(Apple&, string);
private:
    int _weight;
    string color;
    int _id;
    static int count;
};

int main() {
    Apple apple(150, "Red");
    Apple apple2(100, "Green");
    Apple apple3(200, "Yellow");

    cout << apple.getId() << '\n';
    cout << apple2.getId() << '\n';
    cout << apple3.getId() << '\n';

    cout << "Количетво объектов: " << Apple::getCount() << '\n';

    cout << "Цвет apple: " << apple.getColor() << '\n';
    Apple::changeColor(apple, "Pink");
    cout << "После изменения цвет apple: " << apple.getColor() << '\n';
    
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

string Apple::getColor() const {
    return this->color;
}

int Apple::getCount() {
    return count;
}

void Apple::changeColor(Apple &apple, string color) {
    apple.color = color;
}

int Apple::count = 0;
