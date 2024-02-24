// Char constant example
#include <iostream>

int main() {
    std::cout << "Lesson 006_b: Char constant\n\n";

    const char 
        NEW_LINE = '\n', TAB = '\t';

    std::cout << "Tabulation 1" << TAB << "Tabulation 2" 
        << TAB << "Tabulation 3" << NEW_LINE;
    
    std::cout << "Move to a new line" << NEW_LINE;

    getchar();

    return 0;
}
