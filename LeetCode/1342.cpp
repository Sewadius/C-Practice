// 1342. Number of Steps to Reduce a Number to Zero
#include <iostream>

class Solution {
public:
    int numberOfSteps(int);
};

int main() {
    Solution s;
    int number;

    std::cout << "Введите целое число: ";
    std::cin >> number;

    std::cout << "Количество шагов: " << s.numberOfSteps(number) << '\n';
    
    return 0;
}

int Solution::numberOfSteps(int num) {
    int steps = 0;
    
    while (num > 0) {
        num % 2 ? --num : num /= 2;
        ++steps;
    }

    return steps;
}
