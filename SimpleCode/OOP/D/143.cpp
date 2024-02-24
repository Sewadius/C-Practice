// Лямбда-выражения, лямбда-функции, анонимные функции
#include <iostream>
#include <functional>
using std::cout;
using std::function;

int main() {
    function<void(int)> f;

    f = [](int a) {
        cout << "Вызвана анонимная функция с параметром - " << a << '\n';
    };

    f(1);

    int p = 0;

    auto f2 = [&p]() {
        p = 5;
    };

    f2();

    cout << p << '\n';
    
    return 0;
}
