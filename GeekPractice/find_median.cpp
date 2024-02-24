// Find the median
#include <iostream>
#include <vector>
#include <algorithm>
using std::vector;
using std::cout;

class Solution {
public:
    int find_median(vector<int>);
};

int main() {
    Solution solution;
    vector<int> input;
    int n, element;

    cout << "Введите размер массива: ";
    std::cin >> n;

    cout << "Введите элементы через пробел: ";
    
    while (n--) {
        std::cin >> element;
        input.push_back(element);
    }

    cout << "Среднее значение: " << solution.find_median(input) << '\n';

    
    return 0;
}

int Solution::find_median(vector<int> v) {
    std::sort(v.begin(), v.end());

    return (v.size() % 2 ? v[v.size() / 2] : 
        (v[v.size() / 2 - 1] + v[v.size() / 2]) / 2);
}
