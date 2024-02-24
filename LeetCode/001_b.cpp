// 1. Two Sum - вариант 2 с использованием хеш-таблицы
#include <iostream>
#include <vector>
#include <unordered_map>
using std::vector;
using std::unordered_map;
using std::cout;

class Solution {
public:
    vector<int> twoSum(vector<int>&, int);
};

int main() {
    Solution solutiion;
    vector<int> elems;
    
    int size, element, target;

    cout << "Введите количество элементов: ";
    std::cin >> size;

    cout << "Введите элементы через пробел: ";

    for (int i = 0; i < size; ++i) {
        std::cin >> element;
        elems.emplace_back(element);
    }

    cout << "Введите целевое значение: ";
    std::cin >> target;

    vector<int> result = solutiion.twoSum(elems, target);

    cout << "Результат: [" << result.at(0) << ", " 
        << result.at(1) << "]\n";
    
    return 0;
}

// Solution - OK, Runtime 80.48%, Memory 27.70%
vector<int> Solution::twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> seen;

    for (size_t i = 0; i < nums.size(); ++i) {
        int component = target - nums[i];

        if (seen.find(component) != seen.end())
            return {seen[component], (int)i};

        seen[nums[i]] = i;
    }

    return {};
}
