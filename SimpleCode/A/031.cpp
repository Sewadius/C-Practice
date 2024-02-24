// Двумерный массив
#include <iostream>
using std::cout;

int main() {
    const int ROW = 3, COL = 4;
    int arr[ROW][COL];

    for (int i = 0; i < ROW; i++) {
        for (int j = 0; j < COL; j++)
            cout << arr[i][j] << " ";
        cout << "\n";
    }

    cout << "\nЭлемент arr[1][1] до инициализации: " 
        << arr[1][1] << "\n";

    arr[1][1] = 55;

    cout << "Элемент arr[1][1] после инициализации: " 
        << arr[1][1] << "\n";

    return 0;
}
