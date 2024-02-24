// 1672. Richest Customer Wealth
#include <iostream>
#include <vector>
using std::vector;

class Solution {
public:
    int maximumWealth(vector<vector<int>>&);
};

int main() {
    Solution solution;
    vector<vector<int>> v1 = {{1, 2, 3}, {3, 2, 1}};
    vector<vector<int>> v2 = {{1, 5}, {7, 3}, {3, 5}};
    vector<vector<int>> v3 = {{2, 8, 7}, {7, 1, 3}, {1, 9, 5}};
    
    std::cout << solution.maximumWealth(v1) << '\n';
    std::cout << solution.maximumWealth(v2) << '\n';
    std::cout << solution.maximumWealth(v3) << '\n';
    
    return 0;
}

int Solution::maximumWealth(vector<vector<int>> &accounts) {
    int sum, maximum = 0;

    for (size_t i = 0; i < accounts.size(); ++i) {
        sum = 0;
        for (const int &j : accounts[i])
            sum += j;
        if (sum > maximum) maximum = sum;
    }

    return maximum;
}
