// A. Bit++ - сложность 800
// Решение через class
#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::string;

class Bit {
public:
    static short value;
    void getLine();
    void checkLine();

private:
    string _line;
};

int main() {
    Bit bit;
    size_t lines;

    cin >> lines;

    while (lines--) {
        bit.getLine();
        bit.checkLine();
    }

    cout << bit.value << "\n";

    return 0;
}

short Bit::value = 0;

void Bit::getLine() {
    cin >> _line;
}

void Bit::checkLine() {
    size_t len = _line.size() - 1;
    if (_line[0] == '+' || _line[len] == '+')
        ++value;
    else
        --value;
}

