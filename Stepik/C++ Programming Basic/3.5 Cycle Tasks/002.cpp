// 2. A very clever calculator
#include <iostream>
using std::cout;

class Factorial {
    public:
        Factorial(size_t);
        long long int getResult() const;
    private:
        size_t _number;
};

Factorial::Factorial(size_t number) {
    this->_number = number;
}

long long int Factorial::getResult() const {
    long long int result = 1;

    for (size_t i = 1; i <= _number; i++)
        result *= i;

    return result;
}

int main() {
    int number;

    cout << "Enter the integer number: ";
    std::cin >> number;

    Factorial factorial(number);

    cout << "Factorial from " << number << " is " 
        << factorial.getResult() << "\n\n";

    system("pause");
    return 0;
}
