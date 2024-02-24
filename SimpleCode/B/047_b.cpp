// Использование указателей в массиве
#include <iostream>
using std::cout;

int main() {
    const size_t SIZE = 5;
    int arr[SIZE]{0, 1, 3, 4, 10};

    for (size_t i = 0; i < SIZE; i++)
        cout << arr + i << ": " << *(arr + i) << "\n";

    cout << "\n";

    return 0;
}
