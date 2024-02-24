// Choice
#include <iostream>
#include <vector>
using std::vector;
using std::string;
using std::to_string;
using std::cout;

class Solution {
public:
    vector<int> arrayForm(int, int, int);
    string stringForm(int, int, int);
};

int main() {
    Solution solution;
    int a, b, c;
    vector<int> result;

    cout << "Введите три значения через пробел: ";
    std::cin >> a >> b >> c;

    result = solution.arrayForm(a, b, c);

    cout << "В виде массива: ";

    for (const int& i : result)
        cout << i << ' ';

    cout << "\nВ виде строки: " + solution.stringForm(a, b, c) + '\n';
    
    return 0;
}

vector<int> Solution::arrayForm(int a, int b, int c) {
    vector<int> array;

    array.insert(array.end(), {a, b, c});
    return array;
}

string Solution::stringForm(int a, int b, int c) {
    return to_string(a) + to_string(b) + to_string(c);
}

