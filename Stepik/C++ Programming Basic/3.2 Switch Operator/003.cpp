// 3. Smart calculator
#include <iostream>
using std::cout;

class Calculator {
    public:
        Calculator(float, char, float);
        void printResult() const;
        float sum() const;
        float sub() const;
        float mul() const;
        float div() const;
    private:
        float _number1, _number2;
        char _operation;
};

Calculator::Calculator(float a, char ch, float b) {
    this->_number1 = a;
    this->_operation = ch;
    this->_number2 = b;
}

void Calculator::printResult() const {
    float result;
    cout << _number1;

    switch (this->_operation) {
        case '+':
            result = sum(); cout << " + "; break;
        case '-':
            result = sub(); cout << " - "; break;
        case '*':
            result = mul(); cout << " * "; break;
        case '/':
            result = div(); cout << " / "; break;
    }
    
    cout << _number2 << " = " << result << '\n' << '\n';
}

float Calculator::sum() const {
    return this->_number1 + this->_number2;
}

float Calculator::sub() const {
    return this->_number1 - this->_number2;
}

float Calculator::mul() const {
    return this->_number1 * this->_number2;
}

float Calculator::div() const {
    return this->_number1 / this->_number2;
}

int main() {
    float a, b;
    char op;

    cout << "Enter first number, operation and second number: ";
    std::cin >> a >> op >> b;
    Calculator calc(a, op, b);
    calc.printResult();

    system("pause");
    return 0;
}
