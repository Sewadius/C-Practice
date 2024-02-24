// Виртуальный деструктор
#include <iostream>
using std::cout;

class A {
public:
    A() {
        cout << "Выделена динамическая память, объект класса A\n";
    }

    virtual ~A() {
        cout << "Освобождена динамическая память, объект класса A\n";
    }
};

class B : public A {
public:
    B() {
        cout << "Выделена динамическая память, объект класса B\n";
    }

    ~B() override {
        cout << "Освобождена динамическая память, объект класса B\n";
    }
};

int main() {
    A *bptr = new B;

    delete bptr;

    return 0;
}
