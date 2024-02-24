// Check for Binary
#include <iostream>
#include <string>
#include <iomanip>
using std::string;
using std::cout;

const char ONE = '1';
const char ZERO = '0';

bool isBinary(string);

int main() {
    string s;

    cout << "Введите строку для проверки: ";
    std::cin >> s;
    
    cout << "isBinary: " << std::boolalpha << isBinary(s) << '\n';

    return 0;
}

bool isBinary(string str) {
    for (size_t i = 0; i < str.size(); i++) {
        char ch = str[i];
        if (ch != ONE && ch != ZERO)
            return false;
    }
    return true;
}
