// Функция, которая меняет значение двух переменных
#include <iostream>
using std::cout;
using std::cin;

void foo(int *, int *);
void printValues(int, int);

int main() {
    int a, b;
    cout << "Введите переменные a и b: ";
    cin >> a >> b;
    printValues(a, b);

    foo(&a, &b);
    cout << "\nПосле изменения значений\n";
    printValues(a, b);
    
    return 0;
}

void foo(int *a, int *b) {
    int c = *a;
    *a = *b;
    *b = c;
}

void printValues(int a, int b) {
    cout << "a = " << a << ", b = " << b << "\n";
}
