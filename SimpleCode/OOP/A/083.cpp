// Перегрузка оператора присваивания
#include <iostream>

class MyClass {
public:
    MyClass(int);
    MyClass(const MyClass&);
    ~MyClass() {
        std::cout << "Вызывался деструктор\t" << this << '\n';
        delete[] _data;
    }
    MyClass& operator = (const MyClass&);
private:
    int *_data;
    int _size;
};

int main() {
    MyClass a(10);
    MyClass b(a);
    MyClass c(5);

    c = a = b;
    
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

// Оператор присваивания
MyClass& MyClass::operator = (const MyClass &other) {
    std::cout << "Вызвался оператор = " << this << std::endl;

    this->_size = other._size;

    if (this->_data != nullptr)
        delete[] this->_data;

    this->_data = new int[other._size];

    for (int i = 0; i < other._size; ++i)
        this->_data[i] = other._data[i];

    return *this;
}
