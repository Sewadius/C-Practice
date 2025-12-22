// Page 63 - использует и отображает переменную
#include <iostream>
using namespace std;

void print(int);

int main() {
    int carrots;                // Объявление переменной целочисленного типа
    carrots = 25;

    cout << "I have ";
    print(carrots);

    carrots = carrots - 1;      // Изменение переменной
    cout << "Crunch, crunch. Now I have ";
    print(carrots);

    return 0;
}

// Вывод информации
void print(int carrots) {
    cout << carrots;
    cout << " carrots.";
    cout << endl;
}
