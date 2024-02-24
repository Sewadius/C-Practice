// Порядок вызова деструкторов при множественном наследовании
#include <iostream>
#include <string>
using std::cout;
using std::string;

class Car {
public:
    Car() {
        cout << "Вызван конструктор Car\n";
    }

    ~Car() {
        cout << "Вызван деструктор Car\n";
    }
    void drive();
    string str = "Поле класса машины";
};

class Airplane {
public:
    Airplane() {
        cout << "Вызван конструктор Airplane\n";
    }

    ~Airplane() {
        cout << "Вызван деструктор Airplane\n";
    }
    void fly();
    string str = "Поле класса самолета";
};

class Vehicle {
public:
    Vehicle() {
        cout << "Вызван конструктор Vehicle\n";
    }

    ~Vehicle() {
        cout << "Вызван деструктор Vehicle\n";
    }
};

class FlyingCar : public Car, public Airplane, public Vehicle {
public:
    FlyingCar() {
        cout << "Вызван конструктор FlyingCar\n";
    }

    ~FlyingCar() {
        cout << "Вызван деструктор FlyingCar\n";
    }
    void print() const;
};

int main() {
    FlyingCar fc;
    fc.print();
    
    return 0;
}

void Car::drive() {
    cout << "Я еду!\n";
}

void Airplane::fly() {
    cout << "Я лечу!\n";
}

void FlyingCar::print() const {
    cout << "*** *** ***\n";
}
