// Количество элементов в массиве
#include <iostream>
using std::cout;

int main() {
    int arr[]{5, 33, 545, 111, 326};
    char arrChar[]{'a', 'b', 'c'};

    const int LENGTH = sizeof(arr) / sizeof(int);
    const int LENGTH_CH = sizeof(arrChar) / sizeof(char);

    cout << "Размер массива arr[]: " << sizeof(arr) << " байт\n";
    cout << "Количество элементов arr[]: " << LENGTH << "\n";

    cout << "\nРазмер массива arrChar[]: " << sizeof(arrChar) << " байт\n";
    cout << "Количество элементов arrChar[]: " << LENGTH_CH << "\n";

    // Через первый элемент массива
    cout << "Размер массива, способ 2: " << sizeof(arr) / sizeof(arr[0]) << "\n";

    return 0;
}
