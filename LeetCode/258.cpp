// 258. Add Digits
#include <iostream>
#include <vector>
using std::cout;
using std::vector;

const int ZERO = 0;
const int NINE = 9;
const int TEN = 10;

class Solution {
public:
    int addDigits(int);
};

int main() {
    Solution solution;
    int number;

    cout << "Введите число: ";
    std::cin >> number;

    cout << "Результат: " << solution.addDigits(number) << '\n';
    
    return 0;
}

// Solution - OK, Runtime 19.25%, Memory 9.10%
int Solution::addDigits(int num) {
    vector<int> digits;
    int sum;

    while (num > NINE) {
        sum = 0;

        while (num > ZERO) {
            int digit = num % TEN;
            digits.push_back(digit);
            num /= TEN;
        }

        for (const int& i : digits)
            sum += i;

        num = sum;
        digits.clear();
    }

    return num;
}
