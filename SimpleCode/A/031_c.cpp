// Ручная инициализация двумерного массива
#include <iostream>

int main() {
    const int ROW = 2, COL = 4;

    int arr[ROW][COL]
    {
        {2, 4, 66, 1},
        {4344, 3, 6, 1}
    };

    for (int i = 0; i < ROW; i++) {
        for (int j = 0; j < COL; j++)
            std::cout << arr[i][j] << " ";
        std::cout << "\n";
    }

    return 0;
}
