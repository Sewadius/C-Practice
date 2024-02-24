// C++ Strings
#include <iostream>
#include <string>
using std::string;

string conCat(string, string);

int main() {
    string str1, str2;

    std::cout << "Введите первую строку: ";
    std::cin >> str1;

    std::cout << "Введите вторую строку: ";
    std::cin >> str2;

    std::cout << "Результирующая строка: " << conCat(str1, str2) << '\n';
    
    return 0;
}

string conCat(string s1, string s2) {
    return s1 + s2;
}
