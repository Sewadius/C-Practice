// Копирование динамического массива
#include <iostream>
#include <ctime>
using std::cout;

void fillArray(int* const, const int);
void showArray(const int* const, const int);

int main() {
    srand(time(NULL));

    int size = 10;
    int *firstArray = new int[size];
    int *secondArray = new int[size];

    fillArray(firstArray, size);
    fillArray(secondArray, size);

    cout << "First Array: ";
    showArray(firstArray, size);

    cout << "Second Array: ";
    showArray(secondArray, size);

    // Копирование массива
    delete[] firstArray;
    for (int i = 0; i < size; i++) {
        firstArray[i] = secondArray[i];
    }

    cout << "\nFirst Array: ";
    showArray(firstArray, size);

    cout << "Second Array: ";
    showArray(secondArray, size);

    delete[] firstArray;
    delete[] secondArray;

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
