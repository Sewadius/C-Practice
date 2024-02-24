// A. Bit++ - сложность 800
// Решение через переменные
#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::string;

const char PLUS = '+';
const char MINUS = '-';

int main() {
    short value = 0;    // Начальное значение переменной
    size_t lines;       // Общее количество команд
    string line;        // Текущая команда

    cin >> lines;

    for (; lines > 0; lines--) {
        cin >> line;
        size_t last = line.length() - 1;

        if (line[0] == PLUS || line[last] == PLUS)
            ++value;
        else if (line[0] == MINUS || line[last] == MINUS)
            --value;
    }

    cout << value << "\n";

    return 0;
}
