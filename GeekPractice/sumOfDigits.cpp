// Sum Of Digits
#include <iostream>
using std::cout;

const int TEN = 10;

class Solution {
public:
    int sumOfDigits(int);
};

int main() {
    Solution solution;
    int input;

    cout << "Введите число: ";
    std::cin >> input;

    cout << "Сумма цифр: " << solution.sumOfDigits(input) << '\n';
    
    return 0;
}

int Solution::sumOfDigits(int N) {
    int sum = 0;

    while (N > 0) {
        int number = N % TEN;
        sum += number;
        N /= TEN;
    }

    return sum;
}

