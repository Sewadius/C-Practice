// 1108. Defanging an IP Address
#include <iostream>
#include <string>
using std::string;

class Solution {
public:
    string defangIPaddr(string);
};

int main() {
    Solution s;
    string address;

    std::cout << "Введите IP адрес: ";
    std::cin >> address;

    std::cout << "Результат: " << s.defangIPaddr(address) << '\n';
    
    return 0;
}

string Solution::defangIPaddr(string address) {
    size_t pos = address.find(".");

    while (pos != string::npos) {
        address.replace(pos, 1, "[.]");
        pos = address.find(".", pos + 3);
    }

    return address;
}
