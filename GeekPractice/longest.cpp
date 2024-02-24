// Display longest name
#include <iostream>
#include <string>
using std::cout;
using std::string;

class Solution {
public:
    string longest(string names[], int n) {
        string result = names[0];

        for (int i = 1; i < n; i++)
            if (names[i].size() > result.size())
                result = names[i];

        return result;
    }
};

int main() {
    Solution s;
    string names[]{"Geek", "Geeks", "Geeksfor", 
        "GeeksforGeek", "GeeksforGeeks"};
    int n = 5;

    cout << s.longest(names, n) << '\n';
    
    return 0;
}
