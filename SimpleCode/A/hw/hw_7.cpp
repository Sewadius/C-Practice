// Домашнее задание 7
#include <iostream>
#include <ctime>
using std::cout;

int main() {
    srand(time(NULL));
    const int SIZE = 10;                // Размер массива 
    const int LIMIT = 20;               // Верхняя граница значений
    int arr[SIZE]{};                    // Массив
    int number;                         // Сгенерированное число

    number = rand() % LIMIT;
    arr[0] = number;

    for (int i = 1; i < SIZE; i++) {
        
        while (true) {
            bool same = false;          // Условие совпадения чисел
            number = rand() % LIMIT;
            arr[i] = number;
            for (int j = i; j > 0; j--) 
                if (arr[j - 1] == number) 
                    same = true; 
            
            if (same) continue;         // Подбор нового числа
            else break;                 // Переход на следующую позицию
        }
    }

    // Вывод конечного массива
    for (int i = 0; i < SIZE; i++)
        cout << arr[i] << " ";

    cout << "\n";

    return 0;
}
