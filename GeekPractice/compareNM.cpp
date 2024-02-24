// if-else (Decision Making)
#include <iostream>
#include <string>
using std::string;

class Solution {
public:
    string compareNM(int, int);
};

int main() {
    Solution solution;
    int a, b;

    std::cout << "Введите два целых числа через пробел: ";
    std::cin >> a >> b;

    std::cout << "Результат сравнения: " << solution.compareNM(a, b) << '\n';
    
    return 0;
}

string Solution::compareNM(int n, int m) {
    return (n > m ? "greater" : n == m ? "equal" : "lesser");
}
