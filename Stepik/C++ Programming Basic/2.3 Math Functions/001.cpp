// 1. All-power calculator
#include <iostream>
using std::cout;
using std::cin;

const char* TEXT[] = {
    "Sum of numbers: ",
    "Difference of numbers: ",
    "Product of numbers: ",
    "The quotient from dividing numbers: "
};

class Calculator {
    public:
        Calculator(float, float);
        float sum() const;
        float sub() const;
        float mul() const;
        float div() const;
    private:
        float _first, _second;
};

Calculator::Calculator(float first, float second) {
    this->_first = first;
    this->_second = second;
}

float Calculator::sum() const {
    return this->_first + this->_second;
}

float Calculator::sub() const {
    return this->_first - this->_second;
}

float Calculator::mul() const {
    return this->_first * this->_second;
}

float Calculator::div() const {
    return this->_first / this->_second;
}

int main() {
    float first, second;

    cout << "Enter the first number: ";
    cin >> first;

    cout << "Enter the second number: ";
    cin >> second;

    Calculator calc(first, second);

    cout << '\n';
    cout << TEXT[0] << calc.sum() << '\n';
    cout << TEXT[1] << calc.sub() << '\n';
    cout << TEXT[2] << calc.mul() << '\n';
    cout << TEXT[3] << calc.div() << "\n\n";

    system("pause");
    return 0;
}
