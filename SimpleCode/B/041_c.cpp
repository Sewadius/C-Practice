// Разные типы параметров в шаблонной функции
#include <iostream>
using std::cout;

template <typename T1, typename T2>
void print(T1 a, T2 b) {
    cout << a << "\n";
    cout << b << "\n";
}

int main() {
    print(5, "параметр");

    return 0;
}
