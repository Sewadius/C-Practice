// Передача массива в функцию
#include <iostream>
#include <ctime>

const size_t SIZE = 10;

void fillArray(int[]);
void printArray(int[]);

int main() {
    srand(time(NULL));
    int arr[SIZE];

    fillArray(arr);         // Заполнение массива
    printArray(arr);        // Вывод массива

    return 0;
}

void fillArray(int arr[]) {
    for (size_t i = 0; i < SIZE; i++)
        arr[i] = rand() % 10;
}

void printArray(int arr[]) {
    for (size_t i = 0; i < SIZE; i++)
        std::cout << arr[i] << " ";
    std::cout << "\n";
}
