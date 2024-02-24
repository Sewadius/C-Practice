// Наследование шаблонных классов
#include <iostream>
using std::cout;

template <typename T>
class TypeSize {
public:
    TypeSize(T);
    void dataTypeSize() const;
protected:
    T value;
};

template <typename T>
class TypeInfo : public TypeSize<T> {
public:
    TypeInfo(T);
    void showTypeName() const;
};

int main() {
    double a = 2.2;
    char ch = 'a';

    TypeSize<double> typeSize(a);
    typeSize.dataTypeSize();

    TypeInfo<char> typeInfo(ch);
    typeInfo.dataTypeSize();
    typeInfo.showTypeName();
    
    return 0;
}

template <typename T>
TypeSize<T>::TypeSize(T value) {
    this->value = value;
}

template <typename T>
void TypeSize<T>::dataTypeSize() const {
    cout << "value " << sizeof(value) << '\n';
}

template <typename T>
TypeInfo<T>::TypeInfo(T value) : TypeSize<T>(value) {}

template <typename T>
void TypeInfo<T>::showTypeName() const {
    cout << "Название типа: " << typeid(TypeSize<T>::value).name() << '\n';
}
