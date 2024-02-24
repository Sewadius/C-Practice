// Статические поля класса
#include <iostream>
#include <string>
using std::string;

class Apple {
public:
    static int count;

    Apple(int weight, string color) {
        this->_weigth = weight;
        this->_color = color;
        count++;
    }
    void printCount();
private:
    int _weigth;
    string _color;
};

int main() {
    Apple apple(150, "red");
    apple.printCount();

    Apple apple2(100, "green");
    apple2.printCount();
    
    return 0;
}

int Apple::count = 0;

void Apple::printCount() {
    std::cout << "Всего яблок: " << count << '\n';
}
