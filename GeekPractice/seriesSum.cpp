// Sum of Series
#include <iostream>

class Solution {
public:
    long long seriesSum(int);
};

int main() {
    int n = 5;
    int k = 46341;

    Solution s;

    std::cout << s.seriesSum(n) << '\n';
    std::cout << s.seriesSum(k) << std::endl;

    return 0;
}

long long Solution::seriesSum(int n) {
    return n * ((long long)n + 1) / 2;
}
