// Двухмерный массив, циклы
// Заполнение и вывод
#include <iostream>

int main() {
    const int ROWS = 5, COLS = 8;
    int arr[ROWS][COLS];

    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            arr[i][j] = rand() % 10;
            std::cout << arr[i][j] << " ";
        }
        std::cout << "\n";
    }

    return 0;
}
