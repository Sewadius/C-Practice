// Изменить размер массива
#include <iostream>

void fillArray(int* const, const int);
void showArray(const int* const, const int);
void push_back(int*&, int&, const int);
void pop_back(int*&, int&);

int main() {
    int size = 5;
    int *arr = new int[size];
    fillArray(arr, size);
    showArray(arr, size);

    // Добавление нового элемента
    push_back(arr, size, 111);
    showArray(arr, size);

    // Удаление последнего элемента
    pop_back(arr, size);
    showArray(arr, size);

    delete[] arr;
    
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

void push_back(int *&arr, int &size, const int value) {
    int *newArray = new int[size + 1];

    for (int i = 0; i < size; i++) {
        newArray[i] = arr[i];
    }

    newArray[size] = value;
    size++;
    
    delete[] arr;

    arr = newArray;
}

void pop_back(int *&arr, int &size) {
    size--;
    int *newArray = new int[size];

    for (int i = 0; i < size; i++)
        newArray[i] = arr[i];

    delete[] arr;
    arr = newArray;
}
