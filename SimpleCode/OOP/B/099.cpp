// Модификаторы доступа при наследовании
#include <iostream>
#include <string>
using std::string;

class A {
public:
    string msgOne = "Сообщение один";
private:
    string msgTwo = "Сообщение два";
protected:
    string msgThree = "Сообщение три";
};

class B : public A {
public:
    void printMsg() {
        std::cout << msgOne << '\n';
    }

    void printProtected() {
        std::cout << msgThree << '\n';
    }
};

int main() {
    B b;
    b.printMsg();
    b.printProtected();
    
    return 0;
}
