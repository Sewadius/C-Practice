// Условная компиляция
#include <iostream>
#define DEBUG
using std::cout;

int main() {
    #ifdef DEBUG
        cout << "Начало цикла\n";
    #endif

    for (int i = 0; i < 4; i++)
        cout << i << " ";
    cout << '\n';

    #ifdef DEBUG
        cout << "Конец цикла\n";
    #endif

    #ifdef DEBUG
        cout << "DEBUG определён\n";
    #else
        cout << "DEBUG не определён\n";
    #endif

    #ifndef MATCH
        cout << "MATCH не определен\n";
    #endif

    return 0;
}
