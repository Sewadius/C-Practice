// Запрос и вывод двух дробных чисел
#include <iostream>
using std::cout;
using std::cin;

void starline();

int main() {
    float var1, var2;

    cout << "Введите первое число: "; cin >> var1;
    cout << "Введите второе число: "; cin >> var2;

    starline();

    cout << "Число 1: " << var1 << "\nЧисло 2: " 
        << var2 << "\n" ;

    return 0;
}

void starline() {
    const size_t LENGTH = 36;

    for (size_t i = 0; i < LENGTH; i++)
        cout << "*";
    cout << std::endl;
}
