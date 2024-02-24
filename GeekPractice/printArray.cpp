// Print Elements of Array
#include <iostream>

class Solution {
public:
    void printArray(int[],  int);
};

int main() {
    int n = 4;
    int array[] = {1, 2, 3, 4};

    Solution solution;
    solution.printArray(array, n);

    std::cout << std::endl;
    
    return 0;
}

void Solution::printArray(int arr[], int n) {
    int size = n;
    do
        std::cout << *(arr + size - n) << " ";
    while (--n > 0);
}
