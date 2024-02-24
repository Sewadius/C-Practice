// Использование класса string
#include <iostream>
#include <string>
using std::string;

int main() {
    string str1 = "Hello";
    string str2 = "World";
    string result;

    result = str1 + str2;
    std::cout << result << '\n';

    // Можно использовать несколько слагаемых
    result = str1 + " " + str2 + "!\n";
    std::cout << result;
    
    return 0;
}
