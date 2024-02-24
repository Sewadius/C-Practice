// Заполнение массива случайными числами
#include <iostream>
#include <ctime>
using std::cout;

int main() {
    srand(time(NULL));
    const int SIZE = 10;
    int arr[SIZE];

    for (int i = 0; i < SIZE; i++) {
        arr[i] = rand() % 100;
        cout << arr[i] << " ";
    }

    cout << std::endl;

    return 0;
}
