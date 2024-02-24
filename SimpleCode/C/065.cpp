// Указатели на функции
#include <iostream>
using std::cout;

void foo1();
void foo2();
int foo3(int);

int main() {
    void(*fooPointer)();

    fooPointer = foo1;
    fooPointer();

    fooPointer = foo2;
    fooPointer();

    int(*intPointer)(int);

    intPointer = foo3;
    cout << intPointer(11) << '\n';

    return 0;
}

void foo1() {
    cout << "void foo 1()" << '\n';
}

void foo2() {
    cout << "void foo 2()" << '\n';
}

int foo3(int a) {
    return a - 1;
}
