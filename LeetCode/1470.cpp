// 1470. Shuffle the Array
#include <iostream>
#include <vector>
using std::vector;
using std::cout;

class Solution {
public:
    vector<int> shuffle(vector<int>&, int);
};

int main() {
    Solution s;
    vector<int> data, res;
    int n, element;

    cout << "Введите число n = ";
    std::cin >> n;

    cout << "Введите исходный массив через пробел: ";

    for (int i = 0; i < n * 2; ++i) {
        std::cin >> element;
        data.push_back(element);
    }

    res = s.shuffle(data, n);

    cout << "Результат перемешивания: ";

    for (const int& i : res)
        cout << i << " ";

    cout << std::endl;
    
    return 0;
}

vector<int> Solution::shuffle(vector<int> &nums, int n) {
    vector<int> result;

    for (int i = 0; i < n; ++i) {
        result.push_back(nums[i]);
        result.push_back(nums[n + i]);
    }

    return result;
}
