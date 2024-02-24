// 1512. Number of Good Pairs
#include <iostream>
#include <vector>
using std::vector;
using std::cout;

class Solution {
public:
    int numIdenticalPairs(vector<int>&);
};

int main() {
    Solution solution;
    vector<int> input;
    int size, element;

    cout << "Введите размер массива: ";
    std::cin >> size;
    cout << "Введите элементы через пробел: ";

    for (int i = 0; i < size; ++i) {
        std::cin >> element;
        input.push_back(element);
    }

    cout << "Результат: " << solution.numIdenticalPairs(input) << '\n';

    return 0;
}

int Solution::numIdenticalPairs(vector<int> &nums) {
    int pairs = 0;
    for (size_t i = 0; i < nums.size(); ++i) {
        for (size_t j = 0; j < nums.size(); ++j)
            if (nums[i] == nums[j] && i < j) ++pairs;
    }
    return pairs;
}
