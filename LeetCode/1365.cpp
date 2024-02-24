// 1365. How Many Numbers Are Smaller Than the Current Number
#include <iostream>
#include <vector>
using std::vector;
using std::cout;

class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>&);
};

int main() {
    Solution solution;
    int length, element;
    vector<int> numbers, result;

    cout << "Введите длину массива: ";
    std::cin >> length;

    cout << "Введите элементы через пробел: ";

    for (int i = 0; i < length; ++i) {
        std::cin >> element;
        numbers.push_back(element);
    }
        
    result = solution.smallerNumbersThanCurrent(numbers);

    cout << "Результат: ";

    for (const int &i : result)
        cout << i << ' ';

    cout << std::endl;

    return 0;
}

vector<int> Solution::smallerNumbersThanCurrent(vector<int> &nums) {
    vector<int> result;

    for (const int &i : nums) {
        int total = 0;

        for (size_t j = 0; j < nums.size(); ++j)
            if (nums[j] < i) total++;

        result.push_back(total);
    }

    return result;
}
