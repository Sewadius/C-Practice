// Surface Area and Volume of Cuboid
#include <iostream>
#include <vector>
using std::vector;

class Solution {
public:
    vector<long long int> find(int, int, int);
};

int main() {
    Solution solution;
    int l, b, h;

    std::cout << "Введите размеры через пробел: ";
    std::cin >> l >> b >> h;

    vector <long long int> res = solution.find(l, b, h);
    
    std::cout << "Результат: " << res[0] << ' ' << res[1] << '\n';
    
    return 0;
}

vector<long long int> Solution::find(int l, int b, int h) {
    long long int L = l, B = b, H = h;

    return {2 * (L * B + B * H + H * L), L * B * H};
}
