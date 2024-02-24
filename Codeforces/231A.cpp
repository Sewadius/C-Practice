// А. Команда - сложность 800
// Решение через size_t тип
#include <iostream>
using std::cout;
using std::cin;

int main() {
    const size_t SOLVE = 2;         // Количество для решения

    size_t tasks;                   // Количество задач 
    size_t amount = 0;              // Задачи для реализации
    size_t first, second, third;    // Мнения по задаче

    cin >> tasks;

    while (tasks--) {
        cin >> first >> second >> third;

        if (first + second + third >= SOLVE)
            amount++;
    }

    cout << amount << std::endl;    // Вывод результата
    
    return 0;
}
