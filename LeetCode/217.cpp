// 217. Contains Duplicate - решение черезе <set>
#include <iostream>
#include <vector>
#include <set>
using std::vector;
using std::set;
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

// Sulution - OK
bool Solution::containsDuplicate(vector<int>& nums) {
    set<int> mySet(nums.begin(), nums.end());

    return mySet.size() != nums.size();
}
