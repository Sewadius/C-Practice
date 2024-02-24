// Инициализация массива
#include <iostream>

int main() {
    int arr[] = {1, 66, 12 ,2 };
    int arrLength = sizeof(arr) / sizeof(int);

    std::cout << "Третий элемент массива: " << arr[2] << "\n\n";

    for (int i = 0; i < arrLength; i++) 
        std::cout << i + 1 << " элемент массива: " << arr[i] << "\n";

    std::cout << "\nИсходный массив arr = {";

    for (int i = 0; i < arrLength; i++)
        if (i != arrLength - 1)
            std::cout << arr[i] << ", ";
        else
            std::cout << arr[i] << "}";

    std::cout << std::endl;

    return 0;
}
