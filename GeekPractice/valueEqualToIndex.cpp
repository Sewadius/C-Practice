// Value equal to index value
#include <iostream>
#include <vector>
using std::cout;
using std::vector;

class Solution {
public:
    vector<int> valueEqualToIndex(int[], int);
};

int main() {
    Solution s;

    int n = 5;
    int arr[]{15, 2, 45, 12, 7};

    for (const int &i : s.valueEqualToIndex(arr, n))
        cout << i << " ";

    cout << std::endl;
    
    return 0;
}

vector<int> Solution::valueEqualToIndex(int arr[], int n) {
    vector<int> result;

    for (int i = 0; i < n; i++)
        if (arr[i] == i + 1) result.push_back(arr[i]);

    return result;
}
