// Вывод массива
#include <iostream>
using std::cout;

int main() {
    const size_t SIZE = 10;
    int arr[SIZE];

    for (size_t i = 0; i < SIZE; i++)
        cout << arr[i] << " ";

    cout << std::endl;

    return 0;
}
