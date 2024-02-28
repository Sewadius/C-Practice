// 5. Flexible adder
#include <iostream>
using std::cout;
using std::cin;

class SumNumbers {
    public:
        SumNumbers(size_t);
        int getResult();
    private:
        size_t _total_numbers;
        int _total_sum;
};

SumNumbers::SumNumbers(size_t n) {
    this->_total_numbers = n;
    this->_total_sum = 0;
}

int SumNumbers::getResult() {
    int value;

    cout << "Enter the numbers: ";

    for (size_t i = 0; i < _total_numbers; i++) {
        cin >> value; _total_sum += value;
    }

    return _total_sum;
}

int main() {
    int n;

    cout << "Enter the total number of numbers: ";
    cin >> n;

    SumNumbers sum = SumNumbers(n);
    int result = sum.getResult();

    cout << "The sum of these numbers is " << result << "\n\n";

    system("pause");
    return 0;
}
