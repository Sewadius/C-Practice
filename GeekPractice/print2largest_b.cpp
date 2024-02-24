// Second Largest - версия с улучшенным алгоритмом
#include <iostream>
using std::cout;

class Solution {
public:
    int print2largest(int[], int);
};

int main() {
    Solution solution;
    int size, element;

    cout << "Введите размер массива: ";
    std::cin >> size;

    int arr[size];

    cout << "Введите элементы массива через пробел: ";

    for (int i = 0 ; i < size; ++i) {
        std::cin >> element;
        arr[i] = element;
    }

    cout << "Второй наибольший элемент: " << 
        solution.print2largest(arr, size) << '\n';
    
    return 0;
}

int Solution::print2largest(int arr[], int n) {
   if (n < 2) return -1;

   int max = arr[0];
   int second = INT32_MIN;

   for (int i = 1; i < n; ++i)
        if (arr[i] > max) {
            second = max;
            max = arr[i];
        } else if (arr[i] > second && arr[i] != max)
            second = arr[i];

    if (second == INT32_MIN)
        return -1;

    return second;
}
