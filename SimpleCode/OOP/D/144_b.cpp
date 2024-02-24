// Захват контекста лямбдой для класса
#include <iostream>
using std::cout;

class MyClass {
public:
    int a = 11;
    void msg();
    void lambda();
};

int main() {
    MyClass myClass;
    myClass.lambda();
    
    return 0;
}

void MyClass::msg() {
    cout << "msg\n";
}

void MyClass::lambda() {
    auto f = [this]() -> void {
        this->msg();
    };

    f();
}
