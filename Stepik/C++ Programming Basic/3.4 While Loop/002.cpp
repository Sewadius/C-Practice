// 2. Numerical adder
#include <iostream>
#include <vector>
using std::cout;
using std::vector;

class NumericSum {
    public:
        NumericSum(int);
        void getDigits();
        int getSum() const;
    private:
        int _number;
        vector<size_t> _digits;
};

NumericSum::NumericSum(int n) {
    this->_number = n;
}

void NumericSum::getDigits() {
    do {
        size_t digit = _number % 10;
        _digits.push_back(digit);
        _number /= 10;
    } while (_number > 0);
}

int NumericSum::getSum() const {
    int sum = 0;

    for (size_t digit : _digits)
        sum += digit;

    return sum;
}

int main() {
    int n;

    cout << "Enter the number: ";
    std::cin >> n;

    NumericSum numericSum = NumericSum(n);
    numericSum.getDigits();

    cout << "Sum of digits: " << numericSum.getSum() << "\n\n";

    system("pause");
    return 0;
}
