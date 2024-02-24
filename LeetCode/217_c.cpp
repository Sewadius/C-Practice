// 217. Contains Duplicate - через <unordered_set>
#include <iostream>
#include <vector>
#include <set>
#include <unordered_set>
using std::vector;
using std::unordered_set;
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

// Solution - OK
bool Solution::containsDuplicate(vector<int>& nums) {
    unordered_set<int> seen;

    for (const int& num : nums) {
        if (seen.count(num) > 0) return true;
        else seen.insert(num);
    }

    return false;
}
