// 2235. Add Two Integers
#include <iostream>

class Solution {
public:
    int sum(int, int);
};

int Solution::sum(int num1, int num2) {
    return num1 + num2;
}

int main() {
    Solution s;
    
    std::cout << "17 == " << s.sum(12, 5) << "\n";
    std::cout << "-6 == " << s.sum(-10, 4) << "\n";

    return 0;
}
