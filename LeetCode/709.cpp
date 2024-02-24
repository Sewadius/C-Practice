// 709. To Lower Case
#include <iostream>
#include <string>
#include <cctype>
using std::string;

class Solution {
public:
    string toLowerCase(string);
};

int main() {
    Solution s;
    string str;

    std::cout << "Введите строку: ";
    std::cin >> str;

    std::cout << "В нижнем регистре: " << s.toLowerCase(str) << '\n';
    
    return 0;
}

string Solution::toLowerCase(string s) {
    for (size_t i = 0; i < s.size(); ++i)
        s[i] = tolower(s[i]);
    
    return s;
}
