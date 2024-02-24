// Размер для массива char
#include <iostream>
using std::cout;

int main() {
    char arr[] = {'a', 'b', 'c', 'd'};
    size_t size = sizeof(arr) / sizeof(arr[0]);

    cout << "Исходный массив: ";

    for (size_t i = 0; i < size; ++i)
        cout << arr[i] << ' ';

    cout << "\nРазмер одного элемента: " << sizeof(arr[0]) << " байт";
    cout << "\nРазмер массива: " << sizeof(arr) << " байт\n";
    
    return 0;
}
