// Reverse a String
#include <iostream>
#include <string>
using std::string;
using std::cout;

class Solution {
public:
    string revStr(string);
};

int main() {
    Solution solution;
    string s;

    cout << "Введите строку: ";
    std::cin >> s;

    cout << "Обратная строка: " << solution.revStr(s) << '\n';
    
    return 0;
}

string Solution::revStr(string S) {
    string result;

    for (int i = S.size() - 1; i >= 0; --i)
        result.push_back(S[i]);
    
    return result;
}
