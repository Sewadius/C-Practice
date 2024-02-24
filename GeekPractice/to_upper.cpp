// Lower case to upper case
#include <iostream>
#include <string>
#include <cctype>
using std::cout;
using std::string;

string to_upper(string);

int main() {
    string s;

    cout << "Введите строку: ";
    std::cin >> s;

    cout << to_upper(s) << '\n';
    
    return 0;
}

string to_upper(string str) {
    for (size_t i = 0; i < str.size(); ++i)
        str[i] = toupper(str[i]);
    
    return str;
}
