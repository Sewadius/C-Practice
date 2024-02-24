// Контейнеры STL и операторы сравнения
#include <iostream>
#include <array>
using std::array;
using std::cout;

int main() {
    array<int, 4> arr = {1, 94, 77, 9};
    array<int, 4> arr_2 = {1, 94, 77, 9};

    bool result = arr == arr_2;

    cout << "Сравнение arr и arr_2: " << std::boolalpha << result << '\n';
    
    return 0;
}
