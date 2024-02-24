// Sum of Array
#include <iostream>

class Solution {
public:
    int sum(int[], int);
};

int main() {
    Solution s;
    int array[]{1, 3, 3};

    std::cout << s.sum(array, 3) << '\n';

    return 0;
}

int Solution::sum(int arr[], int n) {
    int sum = 0;

    for (int i = 0; i < n; i++)
        sum += *(arr + i);
    
    return sum;
}
