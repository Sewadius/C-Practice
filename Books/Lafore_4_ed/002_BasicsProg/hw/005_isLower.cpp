// Задание 5 - применение функции islower()
#include <iostream>
#include <cctype>
using std::cout, std::cin;

int main() {
    char ch;
    
    cout << "Введите букву: "; cin >> ch;

    bool result = static_cast<bool>(islower(ch));
    cout << "Это строчная буква: " << result << '\n';

    return 0;
}

