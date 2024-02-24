// Red OR Green
#include <iostream>
#include <string>
using std::string;
using std::cout;

const char RED = 'R';
const char GREEN = 'G';

class Solution {
public:
    int RedOrGreen(int, string);
};

int main() {
    Solution solution;
    string input;

    cout << "Введите исходную строку: ";
    std::cin >> input;
    
    int size = (int)input.size();

    cout << "Результат: " << solution.RedOrGreen(size, input) << '\n';
    
    return 0;
}

int Solution::RedOrGreen(int N, string S) {
    int counterRed = 0, counterGreen = 0;

    for (int i = 0; i < N; ++i)
        if (S[i] == RED) ++counterRed;
        else if (S[i] == GREEN) ++counterGreen;

    return (counterGreen < counterRed ? counterGreen : counterRed);
}
