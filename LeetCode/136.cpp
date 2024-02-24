// 136. Single Number
#include <iostream>
#include <vector>
#include <algorithm>
using std::cout;
using std::cin;
using std::vector;
using std::count;
using std::remove;

class Solution {
public:
    int singleNumber(vector<int>&);
};

int main() {
    Solution s;
    vector<int> data;
    int size, element;

    cout << "Введите количество элементов: ";
    cin >> size;
    cout << "Введите элементы через пробел: ";

    while (size--) {
        cin >> element;
        data.push_back(element);
    }

    cout << "Результат: " << s.singleNumber(data) << '\n';
    
    return 0;
}

// Solution - OK, Runtime 5.21%, Memory 23.71%
int Solution::singleNumber(vector<int>& nums) {
    vector<int> check, repeats;

    for (const int& i : nums) {
        if (count(check.begin(), check.end(), i)) {
            check.erase(remove(check.begin(), check.end(), i), check.end());
            repeats.push_back(i);
        }
        else if (!count(repeats.begin(), repeats.end(), i))
            check.push_back(i);
    }

    return check.at(0);
}
