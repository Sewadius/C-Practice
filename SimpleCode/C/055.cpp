// Динамический массив
#include <iostream>

int main() {
    int size;

    std::cout << "Введите размер массива: ";
    std::cin >> size;

    int *arr = new int[size];

    for (int i = 0; i < size; i++)
        *(arr + i) = rand() % 10;

    for (int i = 0; i < size; i++) 
        std::cout << arr[i] << " - " << 
            arr + i << "\n";

    delete[] arr;

    return 0;
}
