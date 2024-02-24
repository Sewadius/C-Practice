// Convert String to LowerCase
#include <iostream>
#include <string>
using std::string;

class Solution {
public:
    string toLower(string);
};

int main() {
    string str = "HELLO";
    Solution s;

    std::cout << "Initial string: " << str << '\n';
    std::cout << "Result: " << s.toLower(str) << '\n';

    return 0;
}

string Solution::toLower(string S) {
    for (size_t i = 0; i < S.size(); i++)
        S[i] = tolower(S[i]);
    return S;
}
