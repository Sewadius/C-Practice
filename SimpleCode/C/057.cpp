// Константные аргументы функции
#include <iostream>

void fillArray(int* const, const int);
void showArray(const int* const, const int);

int main() {
    
    return 0;
}

void fillArray(int* const arr, const int size) {
    for (int i = 0; i < size; i++)
        arr[i] = rand() % 10;
}

void showArray(const int* const arr, const int size) {
    for (int i = 0; i < size; i++)
        std::cout << arr[i] << " ";
    std::cout << "\n";
}
