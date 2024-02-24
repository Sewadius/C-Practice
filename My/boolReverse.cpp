// Инверсия булевого значения через функцию
#include <iostream>
using std::cout;

bool inverse(bool&);

int main() {
    bool b;

    cout << "Введите логическое значение: ";
    std::cin >> b;

    cout << "Результат: " << std::boolalpha << inverse(b) << '\n'; 
    
    return 0;
}

bool inverse(bool &b) {
    return !b;
}
