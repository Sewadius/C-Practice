// Структуры в C++, разница между структурой и классом
#include <iostream>
using std::cout;

class MyClass {
public:
    void print() { cout << a << std::endl; }
private:
    int a = 10;
};

struct MyStruct {
    int a = 22;
    void print() { cout << a << std::endl; }
};

struct MyStruct2 : MyStruct {};

int main() {
    MyClass myClass;
    MyStruct myStruct;

    myClass.print();
    myStruct.print();

    MyStruct2 myStruct_2;
    cout << myStruct_2.a << '\n';
    
    return 0;
}
