// Таблица символов ASCII
#include <iostream>
using std::cout;

int main() {
    setlocale(LC_ALL, "ru");

    cout << "Размер char: " << sizeof(char) << " байт\n";

    for (int i = 0; i < 255; i++)
        cout << "code = " << i << ", char = " << (char)i << "\n";

    return 0;
}
