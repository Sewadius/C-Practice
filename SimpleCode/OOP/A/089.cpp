// Вынести реализацию метода из класса
#include <iostream>

class MyClass {
public:
    void printMessage();
};

int main() {
    MyClass my;
    my.printMessage();

    return 0;
}

void MyClass::printMessage() {
    std::cout << "Hello!\n";
}
