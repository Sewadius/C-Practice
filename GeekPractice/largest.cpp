// Largest Element in Array
#include <iostream>
#include <vector>
using std::vector;
using std::cout;

class Solution {
public:
    int largest(vector<int>&, int);
};

int main() {
    Solution s;
    int size, value;
    vector<int> v;

    cout << "Введите размер последовательности: ";
    std::cin >> size;

    cout << "Введите положительные целые через пробел: ";

    while (size--) {
        std::cin >> value;
        v.push_back(value);
    }

    cout << "Наибольшее значение: " << s.largest(v, size) << '\n';
    
    return 0;
}

int Solution::largest(vector<int> &arr, int n) {
    int maximum = 0;

    for (const int& i : arr)
        if (i > maximum) maximum = i;

    return maximum;
}
