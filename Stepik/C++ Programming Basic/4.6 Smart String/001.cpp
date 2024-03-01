// 2. The words are backwards
#include <iostream>
#include <string>
using std::cout;
using std::string;

int main() {
    string word;
    std::cin >> word;

    for (int i = word.size() - 1; i >= 0; i--)
        cout << word[i]; 

    return 0;
}
