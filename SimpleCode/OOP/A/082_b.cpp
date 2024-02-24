// Конструктор копирования, динамическая память
#include <iostream>

class MyClass {
public:
    MyClass(int);
    MyClass(const MyClass&);
    ~MyClass() {
        std::cout << "Вызывался деструктор\t" << this << '\n';
        delete[] _data;
    }
private:
    int *_data;
    int _size;
};

int main() {
    MyClass a(10);
    MyClass b(a);
    
    return 0;
}

MyClass::MyClass(int size) {
    this->_size = size;
    this->_data = new int[size];

    for (int i = 0; i < size; ++i)
        _data[i] = i;

    std::cout << "Вызвался конструктор\t" << this << '\n';
}

// Конструктор копирования
MyClass::MyClass(const MyClass &other) {
    this->_size = other._size;
    this->_data = new int[other._size];

    for (int i = 0; i < other._size; ++i)
        this->_data[i] = other._data[i];

    std::cout << "Вызвался конструктор копирования\t" << this << '\n';
}
