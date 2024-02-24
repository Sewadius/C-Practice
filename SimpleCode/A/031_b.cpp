// Инициализация нулями двумерного массива
#include <iostream>

int main() {
    const int ROW = 3, COL = 4;

    int arr[ROW][COL]{};

    for (int i = 0; i < ROW; i++) {
        for (int j = 0; j < COL; j++)
            std::cout << arr[i][j] << " ";
        std::cout << "\n";
    }

    return 0;
}
