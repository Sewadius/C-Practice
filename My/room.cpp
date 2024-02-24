// Пример использования класса
#include <iostream>
using std::cout;

class Room {
public:
    Room(double, double, double);
    double calcArea() const;
    double calcVolume() const;
private:
    double length, width, height;
};

int main() {
    double l, w, h;

    cout << "Введите длину/ширину/высоту через пробел: ";
    std::cin >> l >> w >> h;

    Room room(l, w, h);
    cout << "Площадь комнаты: " << room.calcArea() << '\n';
    cout << "Объём комнаты: " << room.calcVolume() << '\n';
    
    return 0;
}

Room::Room(double length, double width, double height) {
    this->length = length;
    this->width = width;
    this->height = height;
}

double Room::calcArea() const {
    return length * width;
}

double Room::calcVolume() const {
    return length * width * height;
}
