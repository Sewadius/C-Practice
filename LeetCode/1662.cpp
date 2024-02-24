// 1662. Check If Two String Arrays are Equivalent
#include <iostream>
#include <vector>
using std::string;
using std::vector;
using std::cout;

class Solution {
public:
    bool arrayStringsAreEqual(vector<string>&, vector<string>&);
    void fillVector(vector<string>&, size_t);
};

int main() {
    Solution solution;
    size_t size;
    string word;
    vector<string> word_1, word_2;

    cout << "Введите количество слов для word 1: ";
    std::cin >> size;
    cout << "Введите слова через пробел для word 1: ";

    solution.fillVector(word_1, size);

    cout << "Введите количество слов для word 2: ";
    std::cin >> size;
    cout << "Введите слова через пробел для word 2: ";

    solution.fillVector(word_2, size);

    cout << "Результат: " << std::boolalpha << 
        solution.arrayStringsAreEqual(word_1, word_2) << '\n';
    
    return 0;
}

bool Solution::arrayStringsAreEqual(vector<string> &word1, vector<string> &word2) {
    string result_1, result_2;

    for (const string& s : word1)
        result_1 += s;

    for (const string& s : word2)
        result_2 += s;

    return result_1 == result_2;
}

void Solution::fillVector(vector<string> &vector, size_t size) {
    string word;

    for (size_t i = 0; i < size; ++i) {
        std::cin >> word;
        vector.push_back(word);
    }
}
