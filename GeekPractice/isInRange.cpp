// C++ Switch Case Statement
#include <iostream>
#include <string>
using std::string;
using std::cout;

class Solution {
public:
    string isInRange(int);
};

int main() {
    Solution s;
    int number;

    cout << "Проверка целого числа в диапазоне от 1 до 10: ";
    std::cin >> number;

    cout << s.isInRange(number) << '\n';
    
    return 0;
}

string Solution::isInRange(int N) {
    string str;

    switch (N) {
        case 1: str = "one"; break;
        case 2: str = "two"; break;
        case 3: str = "three"; break;
        case 4: str = "four"; break;
        case 5: str = "five"; break;
        case 6: str = "six"; break;
        case 7: str = "seven"; break;
        case 8: str = "eight"; break;
        case 9: str = "nine"; break;
        case 10: str = "ten"; break;
        default: str = "not in range";
    }

    return str;
}
