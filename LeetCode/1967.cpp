// 1967, Number of Strings That Appear as Substrings in Word
#include <iostream>
#include <vector>
using std::vector;
using std::string;
using std::cout;

class Solution {
public:
    int numOfStrings(vector<string>&, string);
};

int main() {
    Solution solution;
    short size;
    string str, word;
    vector<string> data;

    cout << "Введите длину массива: ";
    std::cin >> size;

    cout << "Введите элементы через пробел: ";

    while (size--) {
        std::cin >> str;
        data.push_back(str);
    }

    cout << "Введите строку для проверки: ";
    std::cin >> word;

    cout << "Результат: " << solution.numOfStrings(data, word) << '\n';
    
    return 0;
}

int Solution::numOfStrings(vector<string> &patterns, string word) {
    int total = 0;

    for (const string& s : patterns)
        if (word.find(s) != string::npos) ++total;

    return total;
}
