// Odd or Even
#include <iostream>
#include <string>
using std::string;
using std::cout;

class Solution {
public:
    string oddEven(int);
};

int main() {
    Solution s;
    
    cout << s.oddEven(1) << '\n';
    cout << s.oddEven(2) << '\n';

    return 0;
}

string Solution::oddEven(int N) {
    return (N % 2 ? "odd" : "even");
}
