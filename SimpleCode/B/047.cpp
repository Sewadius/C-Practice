// Указатели и массивы
#include <iostream>

const size_t SIZE = 5;
void printArray(int *);

int main() {
    int arr[SIZE]{4, 55, 79, 1, 4};

    printArray(arr);

    int *pArr = arr;

    printArray(pArr);

    std::cout << "arr\t" << arr << std::endl;
    std::cout << "pArr\t" << pArr << std::endl;

    return 0;
}

void printArray(int *pArr) {
    for (size_t i = 0; i < SIZE; i++)
        std::cout << pArr[i] << " ";
    std::cout << "\n";
}
