// 2535. Differences Between Element SUm and Digit Sum of an Array
#include <iostream>
#include <vector>
using std::vector;
using std::cout;

class Solution {
public:
    int differenceOfSum(vector<int>&);
};

int main() {
    Solution solution;
    int size, element;
    vector<int> nums;

    cout << "Введите размер массива: ";
    std::cin >> size;

    cout << "Введите элементы через пробел: ";
    while (size--) {
        std::cin >> element;
        nums.push_back(element);
    }

    cout << "Результат: " << solution.differenceOfSum(nums) << '\n';
    
    return 0;
}

int Solution::differenceOfSum(vector<int> &nums) {
    int elementSum = 0, digitSum = 0, digit;

    for (const int &i : nums) {
        elementSum += i;
        int number = i;

        while (number > 0) {
            digit = number % 10;
            digitSum += digit;
            number /= 10;
        }
    }

    int result = elementSum - digitSum;

    return (result > 0 ? result : -result);
}
