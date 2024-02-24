// 1920. Build Array from Permutation
#include <iostream>
#include <vector>
using std::vector;

class Solution {
public:
    vector<int> buildArray(vector<int> &);
};

int main() {
    Solution s;
    vector<int> v = {0, 2, 1, 5, 3, 4};

    vector<int> result = s.buildArray(v);

    for (const int &i : result)
        std::cout << i << " ";

    std::cout << '\n';
    
    return 0;
}

vector<int> Solution::buildArray(vector<int> &nums) {
    vector<int> res;

    for (const int &i : nums) {
        res.push_back(nums[i]);
    }

    return res;
}
