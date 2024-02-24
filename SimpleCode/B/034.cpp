// Передача параметров в функцию по значению
#include <iostream>
using std::cout;

void foo(int);
int foo_2(int);

int main() {
    int a = 1;

    foo(a);

    cout << "Значение переменной a: " << a << "\n";

    a = foo_2(a);

    cout << "Новое значение переменной a: " << a << "\n";
    
    return 0;
}

void foo(int value) {
    value++;
}

int foo_2(int value) {
    return ++value;
}
