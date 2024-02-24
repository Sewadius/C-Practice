// Перегрузка оператора ==, симметрично
#include <iostream>

class Number {
public:
    Number(int);
    int getValue() const;
    void setValue(int);
private:
    int _value;
};

bool operator==(const Number&, const Number&);

int main() {
    int number;

    std::cout << "Введите первое число: ";
    std::cin >> number;

    Number number1(number);

    std::cout << "Введите второе число: ";
    std::cin >> number;

    Number number2(number);

    std::cout << (number1 == number2 ? "Числа равны\n" : 
        "Числа не равны\n"); 
    
    return 0;
}

Number::Number(int value) {
    this->_value = value;
}

int Number::getValue() const {
    return _value;
}

void Number::setValue(int value) {
    this->_value = value;
}

bool operator==(const Number &n1, const Number &n2) {
    return n1.getValue() == n2.getValue();
}
