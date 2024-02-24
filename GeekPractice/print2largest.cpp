// Second Largest
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
    int max = arr[0];
    int second;
    bool allTheSame = true;

    for (int i = 1; i < n; ++i)
        if (arr[i] > max) {
            second = max; max = arr[i];
        } else if (arr[i] < max) second = arr[i];

    for (int i = 0; i < n; ++i) {
        if (arr[i] != max && arr[i] > second) 
            second = arr[i];

        if (arr[i] != max) allTheSame = false;
    }

    return (allTheSame ? -1 : second);
}
