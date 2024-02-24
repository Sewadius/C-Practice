// Перегрузка операторов вывода, класс Number
#include <iostream>
using std::ostream;
using std::cout;

class Number {
public:
    Number(int);
private:
    int value;

friend ostream& operator<<(ostream&, const Number&);
};

int main() {
    int number;

    cout << "Введите число: ";
    std::cin >> number;

    Number num(number);
    cout << "Вы ввели число: " << num;
    
    return 0;
}

Number::Number(int value) {
    this->value = value;
}

ostream& operator<<(ostream& os, const Number& number) {
    os << number.value << '\n';
    return os;
}
