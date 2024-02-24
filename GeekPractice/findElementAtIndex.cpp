// C++ Array (print an element) | Set 2
#include <iostream>
using std::cout;

class Solution {
public:
    int findElementAtIndex(int[], int, int);
};

int main() {
    Solution solution;
    int size, element;

    cout << "Введите размер массива и индекс через пробел: ";
    std::cin >> size >> element;

    int arr[size];
    cout << "Введите элементы массива через пробел: ";

    for (int i = 0; i < size; ++i)
        std::cin >> *(arr + i);

    cout << "Искомый элемент: " <<
        solution.findElementAtIndex(arr, size, element) << '\n';

    
    return 0;
}

int Solution::findElementAtIndex(int a[], int n, int key) {
    return (key <= n - 1 ? a[key] : -1);
}
