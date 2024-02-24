// Захват контекста лямбдой, лямбда функции
#include <iostream>
using std::cout;

int main() {
    int a = 55;
    int b = 10;

    // Захват переменной по ссылке
    auto f = [&a]() {
        cout << a << '\n';
        a = 1313;
    };

    f();

    // Новое значение переменной
    cout << a << '\n';

    auto f2 = [&a, b]() {
        cout << "a = " << a << ", b = " << b << '\n';
    };

    f2();

    return 0;
}
