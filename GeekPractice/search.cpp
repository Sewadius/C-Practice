// Searching a number
#include <iostream>

class Solution {
public:
    int search(int[], int, int);
};

int main() {
    Solution s;
    int array[]{9, 7, 2, 16, 4};
    int n = 5, k = 16;
    
    std::cout << "Initial array: { ";

    for (int i = 0; i < n; i++)
        std::cout << array[i] << " ";

    std::cout << "}\n";

    std::cout << "Element: " << k << "\nFound position: ";

    std::cout << s.search(array, n, k) << '\n';
    
    return 0;
}

int Solution::search(int arr[], int n, int k) {
    for (int i = 0; i < n; i++)
        if (arr[i] == k) return i + 1;
    
    return -1;
}
