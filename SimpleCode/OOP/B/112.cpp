// Множественное наследование одинаковые методы
#include <iostream>
#include <string>
using std::cout;
using std::string;

class Car {
public:
    void use();
    string str = "Поле класса машины";
};

class Airplane {
public:
    void use();
    string str = "Поле класса самолета";
};

class FlyingCar : public Car, public Airplane {};

int main() {
    FlyingCar fc;
    
    fc.Car::use();
    fc.Airplane::use();

    ((Car)fc).use();
    ((Airplane)fc).use();
    
    return 0;
}

void Car::use() {
    cout << "Я еду!\n";
}

void Airplane::use() {
    cout << "Я лечу!\n";
}
