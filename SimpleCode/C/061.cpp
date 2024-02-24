// Приведение типов в стиле C
#include <iostream>
using std::cout;

int main() {
    double a = 33.3;

    cout << a << '\n';
    cout << "int: " << (int)a << '\n';
    cout << "bool: " << (bool)a << '\n';
    cout << "char: " << (char)a << '\n';

    int b = 34.34345;   // Неявное преобразование в int
    cout << "b = " << b << std::endl;
    
    return 0;
}
