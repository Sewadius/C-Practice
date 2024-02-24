// Множественное наследование
#include <iostream>
#include <string>
using std::cout;
using std::string;

class Car {
public:
    void drive();
    string str = "Поле класса машины";
};

class Airplane {
public:
    void fly();
    string str = "Поле класса самолета";
};

class FlyingCar : public Car, public Airplane {};

int main() {
    FlyingCar fc;

    fc.drive();
    fc.fly();
    
    cout << fc.Car::str << '\n';
    cout << fc.Airplane::str << '\n';

    Car *ptrCar = &fc;
    Airplane *ptrA = &fc;

    ptrCar->drive();
    ptrA->fly();
    
    return 0;
}

void Car::drive() {
    cout << "Я еду!\n";
}

void Airplane::fly() {
    cout << "Я лечу!\n";
}
