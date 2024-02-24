// Конструктор копирования
#include <iostream>
using std::cout;

class MyClass {
public:
    int data;
    MyClass(int);
    ~MyClass() {
        cout << "Вызвался деструктор " << this << '\n';
    }
};

void foo(MyClass);
MyClass foo_2();

int main() {
    MyClass a(1);
    MyClass c(a);       // Явный вызов конструктора копирования

    foo(a);
    foo_2();
    
    return 0;
}

MyClass::MyClass(int data) {
    this->data = data;
    cout << "Вызвался конструктор " << this << '\n';
}

void foo(MyClass myclass) {
    cout << "Вызвалась функция foo()\n";
}

MyClass foo_2() {
    cout << "Вызвалась функция foo_2()\n";
    MyClass temp(2);

    return temp;
}
