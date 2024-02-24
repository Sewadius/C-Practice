// std::function, полиморфная обёртка функции
#include <iostream>
#include <functional>
using std::cout;
using std::function;

void foo();
void bar();
int sum(int, int);

int main() {
    function<void()> f;
    f = foo;
    f();

    f = bar;
    f();

    function<int(int, int)> f2;
    f2 = sum;
    std::cout << f2(1, 2) << '\n';
    
    return 0;
}

void foo() {
    cout << "foo()\n";
}

void bar() {
    cout << "bar()\n";
}

int sum(int a, int b) {
    return a + b;
}
