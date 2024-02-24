// Порядок вызова деструкторов при наследовании
#include <iostream>
using std::cout;

class A {
public:
    A() {
        cout << "Вызвался конструктор класса А\n";
    }

    ~A() {
        cout << "Вызвался деструктор класса А\n";
    }
};

class B : public A {
public:
    B() {
        cout << "Вызвался конструктор класса B\n";
    }

    ~B() {
        cout << "Вызвался деструктор класса B\n";
    }
};

class C : public B {
public:
    C() {
        cout << "Вызвался конструктор класса C\n";
    }

    ~C() {
        cout << "Вызвался деструктор класса C\n";
    }
};

int main() {
    C c;

    cout << std::endl;
    
    return 0;
}
