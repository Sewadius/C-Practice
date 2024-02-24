// Инициализация массива нулями
#include <iostream>
using std::cout;

int main() {
    int arr[4]{};

    // 0 0 0 0 
    for (size_t i = 0; i < 4; i++)
        cout << arr[i] << " ";

    cout << "\n";

    return 0;
}
