// 9. Palindrome Number - решение через <list>
#include <iostream>
#include <list>
using std::cout;
using std::list;

const int TEN = 10;

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

// Solution - OK, Runtime 23.41%, Memory 7.8%
bool Solution::isPalindrome(int x) {
    if (x < 0) return false;

    list<int> numbers;
    list<int>::iterator it_1, it_2;
    int number;

    while (x > 0) {
        number = x % TEN;
        x /= TEN;
        numbers.push_front(number);
    }
        
    for (it_1 = numbers.begin(), it_2 = --numbers.end(); 
            it_1 != it_2; ++it_1, --it_2)
        if (*it_1 != *it_2) return false;

    return true;
}

