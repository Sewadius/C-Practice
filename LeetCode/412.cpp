// 412. Fizz Buzz
#include <iostream>
#include <vector>
using std::vector;
using std::string;

class Solution {
public:
    void printVector(const vector<string>&);
    vector<string> fizzBuzz(int);
};

int main() {
    Solution s;
    
    int n;

    std::cout << "Введите целое n больше нуля: ";
    std::cin >> n;

    vector<string> res = s.fizzBuzz(n);

    s.printVector(res);
    
    return 0;
}

void Solution::printVector(const vector<string> &v) {
    for (const string &s : v)
        std::cout << s << " ";

    std::cout << '\n';
}

vector<string> Solution::fizzBuzz(int n) {
    string s1 = "FizzBuzz", s2 = "Fizz", s3 = "Buzz";
    vector<string> result;

    for (int i = 1; i < n + 1; ++i) {
        if (i % 3 == 0 && i % 5 == 0)
            result.push_back(s1);
        else if (i % 3 == 0)
            result.push_back(s2);
        else if (i % 5 == 0)
            result.push_back(s3);
        else
            result.push_back(std::to_string(i));
    }

    return result;
}
