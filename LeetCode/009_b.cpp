// 9. Palindrome Number - решение через string
#include <iostream>
#include <string>
using std::cout;
using std::string;

class Solution {
public:
    bool isPalindrome(int);
};

int main() {
    Solution s;
    int number;

    cout << "Введите число: ";
    std::cin >> number;

    cout << "Результат: " << std::boolalpha << s.isPalindrome(number) << '\n';
    
    return 0;
}

// Solution - OK, Runtime 84.95%, Memory - 63.59%
bool Solution::isPalindrome(int x) {
    if (x < 0) return false;

    string s = std::to_string(x);
    int n = s.length();

    for (int i = 0; i < n / 2; ++i)
        if (s[i] != s[n - 1 - i])
            return false;

    return true;
}

