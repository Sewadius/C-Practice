// Multiply Array
#include <iostream>
using std::cout;

class Solution {
public:
    int product(int[], int);
};

int main() {
    Solution solution;
    int size;

    cout << "Введите количество элементов: ";
    std::cin >> size;
    cout << "Введите элементы массива через пробел: ";

    int arr[size];

    for (int i = 0; i < size; ++i)
        std::cin >> arr[i];

    cout << "Результат произведения: " <<
        solution.product(arr, size) << '\n';
    
    return 0;
}

int Solution::product(int arr[], int n) {
    int result = 1;

    for (int i = 0; i < n; ++i)
        result *= arr[i];
    
    return result;
}
