// 2413. Smallest Even Multiple
#include <iostream>

class Solution {
public:
    int smallestEvenMultiple(int);
};

int main() {
    Solution solution;
    int number;

    std::cout << "Введите число: ";
    std::cin >> number;

    std::cout << "Результат: " << solution.smallestEvenMultiple(number) << '\n';
    
    return 0;
}

int Solution::smallestEvenMultiple(int n) {
    const int TWO = 2;

    return (n % TWO ? n * TWO : n);
}
