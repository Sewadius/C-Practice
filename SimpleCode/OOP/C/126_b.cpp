// Шаблонный класс с двумя типами данных
#include <iostream>
using std::cout;

template <typename T1, typename T2>
class MyClass {
public:
    MyClass(T1, T2);
    void dataTypeSize() const;
private:
    T1 value1;
    T2 value2;
};

int main() {
    int a = 5;
    double d = 0.45;

    MyClass<int, double> myClass(a, d);
    myClass.dataTypeSize();
    
    return 0;
}

template <typename T1, typename T2>
MyClass<T1, T2>::MyClass(T1 value1, T2 value2) {
    this->value1 = value1;
    this->value2 = value2;
}

template <typename T1, typename T2>
void MyClass<T1, T2>::dataTypeSize() const {
    cout << "value1 " << sizeof(value1) << " байт\n";
    cout << "value2 " << sizeof(value2) << " байт\n";
}
