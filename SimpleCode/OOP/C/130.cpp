// Умные указатели, smart pointers
#include <iostream>
using std::cout;

template <typename T>
class SmartPointer {
public:
    SmartPointer(T*);
    ~SmartPointer();
    T& operator*();
private:
    T *ptr;
};

int main() {
    int *ptr = new int(5);
    delete ptr;

    SmartPointer<int> pointer = new int(5);
    cout << "Текущее значение: " << *pointer << '\n';

    *pointer = 10;
    cout << "Новые данные: " << *pointer << '\n';

    return 0;
}

template <typename T>
SmartPointer<T>::SmartPointer(T *ptr) {
    cout << "Constructor\n";
    this->ptr = ptr;
}

template <typename T>
SmartPointer<T>::~SmartPointer() {
    cout << "Destructor\n";
    delete ptr;
}

template <typename T>
T& SmartPointer<T>::operator*() {
    return *ptr;
}
