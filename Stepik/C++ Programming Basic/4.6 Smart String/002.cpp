// 4. Template thinking
#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::string;

const char* TEMPLATE = "<-here->";
const size_t LENGTH = 8;

int main() {
    string line, new_line;

    std::getline(cin, line);
    cin >> new_line;

    size_t pos = line.find(TEMPLATE);
    line.replace(pos, LENGTH, new_line);

    cout << line << '\n';
    
    return 0;
}
