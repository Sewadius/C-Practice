// Двумерный динамический массив
#include <iostream>
#include <ctime>

int main() {
    srand(time(NULL));

    const int ROWS = 5, COLS = 6;

    int **arr = new int* [ROWS];        // Массив указателей

    for (int i = 0; i < ROWS; i++)
        arr[i] = new int[COLS];

    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            arr[i][j] = rand() % 20;
            std::cout << arr[i][j] << " ";
        }
        std::cout << "\n";
    }

    // Очистка оперативной памяти
    for (int i = 0; i < ROWS; i++)
        delete[] arr[i];

    delete[] arr;
    
    return 0;
}
