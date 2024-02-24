// 1844. Replace All Digits with Characters
#include <iostream>
#include <string>
using std::string;
using std::cout;

class Solution {
public:
    string replaceDigits(string);
};

int main() {
    Solution solution;
    string str;

    cout << "Введите строку: ";
    std::cin >> str;

    cout << "Результат операции: " <<
        solution.replaceDigits(str) << '\n';
    
    return 0;
}

string Solution::replaceDigits(string s) {
    string result = s;

    for (size_t i = 1; i < s.size(); i += 2) {
        char ch = s[i - 1];
        int number = ch - '0';
        int code = number + (int)s[i];
        result[i] = (char)code;
    }
    
    return result;
}
