// Addition of Two Numbers
#include <iostream>

class Solution {
public:
    int addition(int A, int B) {
        return A + B;
    }
};

int main() {
    Solution s;
    int a = 1, b = 2;

    std::cout << s.addition(a, b) << '\n';
    
    return 0;
}
