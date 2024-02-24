// Count Digits
#include <iostream>
using std::cout;
using std::cin;

const int TEN = 10;

class Solution {
public:
    int evenlyDivides(int);
};

int main() {
    Solution solution;
    int number;

    cout << "Введите целое число: ";
    cin >> number;

    cout << "Результат: " << solution.evenlyDivides(number) << '\n';
    
    return 0;
}

int Solution::evenlyDivides(int N) {
    int total = 0, digit;
    int number = N;

    while (N > 0) {
        digit = N % TEN;
        if (digit != 0 && !(number % digit)) ++total;
        N /= TEN;
    }

    return total;
}
