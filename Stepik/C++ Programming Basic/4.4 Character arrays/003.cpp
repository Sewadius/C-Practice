// 3. Palindromes
#include <iostream>
#include <string>
#include <algorithm>
using std::cout;
using std::string;

int main() {
    string word;

    cout << "Enter the initial string: ";
    std::cin >> word;

    string copy(word);
    std::reverse(word.begin(), word.end());

    cout << (copy == word ? "YES\n\n" : "NO\n\n");

    system("pause");
    return 0;
}
