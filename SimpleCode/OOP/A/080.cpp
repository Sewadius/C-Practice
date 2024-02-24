// Деструктор класса
#include <iostream>

class MyClass {
public:
    MyClass(int data) {
        this->_data = data;
        std::cout << "Объект " << _data << " вызвался конструктор\n";   
    }

    ~MyClass() {
        std::cout << "Объект " << _data << " вызвался деструктор\n";
    }
private:
    int _data;
};

void Foo();

int main() {
    MyClass a(1);
    MyClass b(2);
    MyClass c(3);

    Foo();
    
    return 0;
}

void Foo() {
    std::cout << "Foo() начало выполнения\n";
    MyClass z(4);
    std::cout << "Foo() конец выполнения\n";
}
