// 217. Contains Duplicate - через циклы O^2
#include <iostream>
#include <vector>
using std::vector;
using std::cout;

class Solution {
public:
    bool containsDuplicate(vector<int>&);
};

int main() {
    Solution solution;
    vector<int> data;
    int size, element;

    cout << "Введите количество элементов: ";
    std::cin >> size;

    cout << "Введите элементы через пробел: ";
    
    while (size--) {
        std::cin >> element;
        data.push_back(element);
    }

    cout << "Результат проверки на дубликаты: " <<
        std::boolalpha << solution.containsDuplicate(data) << '\n';

    return 0;
}

// Time Limit Exceeded - 65 / 71 testcases passed
bool Solution::containsDuplicate(vector<int>& nums) {
    for (size_t i = 0; i < nums.size(); ++i) 
        for (size_t j = i + 1; j < nums.size(); ++j)
            if (nums[i] == nums[j])
                return true;

    return false;
}
