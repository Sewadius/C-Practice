// Page 285 - простая переменная строка
#include <iostream>
using namespace std;

int main() {
    const int MAX = 80;
    char str[MAX];          // Максимальный размер строки

    cout << "Введите строку: ";
    cin >> str;

    // Показ результата
    cout << "Вы ввели: "  << str << endl;

    return 0;
}

