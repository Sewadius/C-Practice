// Page 174 - передача аргументов в функцию
#include <iostream>
using namespace std;

void repchar(char, int);

int main() {
    repchar('-', 43);
    cout << "Тип данных     Диапазон" << endl;

    repchar('=', 23);
    cout << "char           -128...127\n";
    cout << "short          -32.768...32.767\n";
    cout << "int            системно-зависимый\n";
    cout << "long           -2.147.483.648...2.147.483.647\n";

    repchar('-', 43);
    return 0;
}

// Передается символ и количество повторов
void repchar(char ch, int n) {
    for (int j = 0; j < n; ++j) cout << ch;
    cout << endl;
}

