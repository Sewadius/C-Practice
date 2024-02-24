// Series AP
#include <iostream>
using std::cout;

class Solution {
public:
    int nthTermOfAP(int, int, int);
};

int main() {
    Solution solution;
    int first, second, find;

    cout << "Введите первое число последовательности: ";
    std::cin >> first;

    cout << "Введите второе число последовательности: ";
    std::cin >> second;

    cout << "Введите номер искомого элемента: ";
    std::cin >> find;

    cout << "Результат: " << solution.nthTermOfAP(first, second, find) << '\n';
    
    return 0;
}

int Solution::nthTermOfAP(int A1, int A2, int N) {
    int delta = A2 - A1;
    int element = delta * N + (A1 - delta);

    return element;
}
