// Константа char, const
#include <iostream>

int main() {
    const char NEW_LINE = '\n', TAB = '\t';

    std::cout << "Табуляция 1" << TAB << "Табуляция 2" 
        << TAB << "Табуляция 3" << NEW_LINE;
    
    std::cout << "Перевод на новую строку" << NEW_LINE;

    return 0;
}
