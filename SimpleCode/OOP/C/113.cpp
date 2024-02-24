// Что такое интерфейс
#include <iostream>
using std::cout;

class IBicycle {
public:
    void virtual twistTheWheel() = 0;
    void virtual ride() = 0;
};

class SimpleBicycle : public IBicycle {
public:
    void twistTheWheel() override;
    void ride() override;
};

class SportBicycle : public IBicycle {
public:
    void twistTheWheel() override;
    void ride() override;
};

class Human {
public:
    void rideOn(IBicycle&);
};

int main() {
    Human human;
    SimpleBicycle simpleBicycle;
    SportBicycle sportBicycle;

    human.rideOn(simpleBicycle);
    human.rideOn(sportBicycle);
    
    return 0;
}

void SimpleBicycle::twistTheWheel() {
    cout << "Метод twistTheWheel() SimpleBicycle\n";
}

void SimpleBicycle::ride() {
    cout << "Метод ride() SimpleBicycle\n";
}

void SportBicycle::twistTheWheel() {
    cout << "Метод twistTheWheel() SportBicycle\n";
}

void SportBicycle::ride() {
    cout << "Метод ride() SportBicycle\n";
}

void Human::rideOn(IBicycle &bicycle) {
    cout << "\nКрутим руль\n";
    bicycle.twistTheWheel();

    cout << "\nПоехали\n";
    bicycle.ride();
}
