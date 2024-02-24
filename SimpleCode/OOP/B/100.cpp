// Порядок вызова конструкторов при наследовании
#include <iostream>
using std::cout;

class A {
public:
    A() {
        cout << "Вызвался конструктор класса А\n";
    }
};

class B : public A {
public:
    B() {
        cout << "Вызвался конструктор класса B\n";
    }
};

class C : public B {
public:
    C() {
        cout << "Вызвался конструктор класса C\n";
    }
};

int main() {
    C c;
    
    return 0;
}
