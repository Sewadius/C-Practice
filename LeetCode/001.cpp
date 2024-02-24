// 1. Two Sum
#include <iostream>
#include <vector>
using std::vector;
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

// Solution - OK, Runtime 5%, Memory 49.45%
vector<int> Solution::twoSum(vector<int>& nums, int target) {
    int firstIndex, secondIndex;
    
    for (size_t i = 0; i < nums.size(); ++i)
        for (size_t j = 1; j < nums.size(); ++j)
            if (i != j && nums[i] + nums[j] == target) {
                firstIndex = i; secondIndex = j; break;
            }

    if (firstIndex < secondIndex)
        return {firstIndex, secondIndex};
    else 
        return {secondIndex, firstIndex};
}
