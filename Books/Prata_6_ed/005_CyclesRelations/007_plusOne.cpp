// Page 216 - операция инкремента
#include <iostream>
using std::cout;

int main() {
    int a = 20, b = 20;

    cout << "a   = " << a << ":   b = " << b << '\n';
    cout << "a++ = " << a++ << ": ++b = " << ++b << '\n';
    cout << "a   = " << a << ":   b = " << b << '\n';

    return 0;
}

