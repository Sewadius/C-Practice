// Порядок вызова конструкторов при множественном наследовании
#include <iostream>
#include <string>
using std::cout;
using std::string;

class Car {
public:
    Car() {
        cout << "Вызван конструктор Car\n";
    }
    void drive();
    string str = "Поле класса машины";
};

class Airplane {
public:
    Airplane() {
        cout << "Вызван конструктор Airplane\n";
    }
    void fly();
    string str = "Поле класса самолета";
};

class Vehicle {
public:
    Vehicle() {
        cout << "Вызван конструктор Vehicle\n";
    }
};

class FlyingCar : public Car, public Airplane, public Vehicle {
public:
    FlyingCar() {
        cout << "Вызван конструктор FlyingCar\n";
    }
};

int main() {
    FlyingCar fc;
    
    return 0;
}

void Car::drive() {
    cout << "Я еду!\n";
}

void Airplane::fly() {
    cout << "Я лечу!\n";
}
