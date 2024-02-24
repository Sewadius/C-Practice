// Динамический массив и умные указатели
#include <iostream>
#include <memory>
#include <ctime>
using std::shared_ptr;
using std::cout;

int main() {
    srand(time(NULL));
    int size;

    cout << "Введите размер массива: ";
    std::cin >> size;

    int *arr = new int[size] {};

    shared_ptr<int[]> ptr(arr);

    cout << "Новые значения массива: ";

    for (int i = 0; i < size; ++i) {
        ptr[i] = rand() % 10;
        cout << ptr[i] << ' ';
    }

    cout << '\n';
    
    return 0;
}
