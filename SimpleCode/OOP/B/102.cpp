// Вызов конструктора базового класса из конструктора класса-наследника
#include <iostream>
#include <string>
using std::string;
using std::cout;

class A {
public:
    A() {
        msg = "Пустое сообщение";
    }

    A(string msg) {
        this->msg = msg;
    }

    void printMsg() const {
        cout << msg << '\n';
    }
private:
    string msg;
};

class B : public A {
public:
    B() : A("Наше новое сообщение") {}
};

class C : public A {
public:
    C();
};

C::C() : A("Сообщение класс C") {}

int main() {
    B value;
    value.printMsg();

    C c;
    c.printMsg();
    
    return 0;
}
