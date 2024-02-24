// Шаблоны классов C++ примеры
#include <iostream>
using std::cout;

template <typename T>
class MyClass {
public:
    MyClass(T);
    void dataTypeSize() const;
    T getValue() const;
private:
    T value;
};

class Point {
public:
    Point() : Point(0, 0, 0) {}
    Point(int x, int y, int z) {
        this->x = x;
        this->y = y;
        this->z = z;
    }
    int getX() const {
        return x;
    }
private:
    int x, y, z;
};

int main() {
    int a = 5;
    double d = 1.123;
    Point point(-1, 5, 10);

    MyClass<int> myClass(a);
    myClass.dataTypeSize();

    cout << "Размер MyClass: " << sizeof(myClass) << " байт\n";

    MyClass<double> myClass_2(d);
    myClass_2.dataTypeSize();

    MyClass<Point> myClass_3(point);
    myClass_3.dataTypeSize();

    Point p(myClass_3.getValue());

    cout << "Координата X: " << p.getX() << '\n';
    
    return 0;
}

template <typename T>
MyClass<T>::MyClass(T value) {
    this->value = value;
}

template <typename T>
void MyClass<T>::dataTypeSize() const {
    cout << sizeof(value) << " байт\n";
}

template <typename T>
T MyClass<T>::getValue() const {
    return this->value;
}
