// 1. Matrix output
#include <iostream>
using std::cout;

const size_t SIZE = 3;
void printMatrix(int[3][3]);

int main() {
    int matrix[3][3] = {
        {3, 5, 8},
        {53, 46, 81},
        {-435, -235, -285}
    };
    
    printMatrix(matrix);
    return 0;
}

void printMatrix(int matrix[3][3]) {
    for (size_t i = 0; i < SIZE; i++) {
        for (size_t j = 0; j < SIZE; j++)
            cout << matrix[i][j] << ' ';
        cout << '\n';
    }
}
