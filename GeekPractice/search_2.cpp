// Search an Element in an array
#include <iostream>
using std::cout;

class Solution {
public:
    int search(int[], int, int);
};

int main() {
    Solution solution;
    int size, element, findElem;

    cout << "Введите количество элементов: ";
    std::cin >> size;

    cout << "Введите элементы через пробел: ";
    
    int arr[size];

    for (int i = 0; i < size; ++i) {
        std::cin >> element;
        arr[i] = element;
    }

    cout << "Введите элемент для поиска в массиве: ";
    std::cin >> findElem;

    cout << "Индекс найденного элемента: " <<
        solution.search(arr, size, findElem) << '\n';
    
    return 0;
}

int Solution::search(int arr[], int N, int X) {
    int foundIndex = -1;

    for (int i = 0; i < N; ++i)
        if (X == arr[i]) { 
            foundIndex = i; break;
        }

    return foundIndex;
}
