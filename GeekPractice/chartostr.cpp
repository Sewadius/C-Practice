// Convert a list of charaters into a String
#include <iostream>
#include <string>
using std::string;
using std::cout;

class Solution {
public:
    string chartostr(char[], int);
};

int main() {
    Solution s;
    int size;

    cout << "Введите количетво символов: ";
    std::cin >> size;
    cout << "Введите символы через пробел: ";

    char ch, arr[size];
    int counter = 0;

    while (size--) {
        std::cin >> ch;
        arr[counter] = ch;
        ++counter;
    }

    cout << "Результат: " << s.chartostr(arr, counter) << '\n';
    
    return 0;
}

string Solution::chartostr(char arr[], int n) {
    string result;

    for (int i = 0; i < n; ++i) {
        result.push_back(arr[i]);
    }

    return result;
}
