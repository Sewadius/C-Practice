// Изменение значения переменной по указателю
#include <iostream>
using std::cout;

void printValue(const int&);

int main() {
    int a = 5;

    printValue(a);

    int *px = &a;
    int *px2 = &a;

    cout << "Адрес переменной: \t" << px << "\n";
    cout << "Второй указатель: \t" << px2 << "\n";

    *px2 = 2;

    printValue(a);

    return 0;
}

void printValue(const int& a) {
    cout << "a = " << a << "\n";
}
