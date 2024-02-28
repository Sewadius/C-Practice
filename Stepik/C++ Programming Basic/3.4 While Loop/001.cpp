// 1. Number reversal
#include <iostream>
#include <vector>
#include <cmath>
using std::cout;
using std::vector;

class Reverse {
    public:
        Reverse(int);
        void getDigits();
        int getReversed();
    private:
        int _number;
        vector<size_t> _digits;
};

Reverse::Reverse(int number) {
    this->_number = number;
}

void Reverse::getDigits() {
    do {
        size_t digit = _number % 10;
        _digits.push_back(digit);
        _number /= 10;
    } while (_number > 0);
}

int Reverse::getReversed() {
    int result = 0;

    while (_digits.size() > 0) {
        size_t digit = _digits.front();
        result += digit * pow(10, _digits.size() - 1);
        _digits.erase(_digits.begin());
    }

    return result;
}

int main() {
    int number;

    cout << "Enter integer number: ";
    std::cin >> number;

    Reverse rev = Reverse(number);
    rev.getDigits();
    cout << "Reversed number: " << rev.getReversed() << "\n\n";

    system("pause");
    return 0;
}
