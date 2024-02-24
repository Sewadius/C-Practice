// А. Команда - сложность 800
// Решение через bool тип
#include <iostream>
using std::cout;
using std::cin;

int main() {
    size_t tasks;               // Количество задач
    bool a, b, c;               // Мнения по задаче
    size_t amount = 0;          // Количество для реализации

    cin >> tasks;

    while (tasks--) {
        cin >> a >> b >> c;
        bool condition = (a && b) || (b && c) || (a && c);
        if (condition) ++amount;
    }

    cout << amount << "\n";     // Вывод результата
    
    return 0;
}
